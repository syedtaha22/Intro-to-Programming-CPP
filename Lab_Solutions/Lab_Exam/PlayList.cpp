/*
    Task 4:
        Design a program to manage a playlist of songs using dynamic memory allocation. Each song has a
        name and a duration (in minutes). The program should allow the user to:
            1.  Add a new song to the playlist at the end of linked list.
            2.  Display all songs in the playlist in the order they were added.
            3.  Remove the first song in the playlist (simulate playing the first song and moving to the next).
            4.  Use dynamic memory allocation for each song in the playlist, ensuring that memory is properly
                managed and freed when no longer needed.
            5.  Implement a destructor to clean up memory when the playlist object is destroyed.

        Submission: PlayList.cpp
*/

// Include the necessary libraries
#include <iostream>
#include <string>

// Structure to represent a Song
struct Song {
    std::string name;
    double duration;
    Song* next;

    // Default constructor
    Song() : next(nullptr) {}

    // Constructor to initialize the song
    Song(std::string name, double duration) : name(name), duration(duration), next(nullptr) {}

    // Overloaded << operator to display the song
    friend std::ostream& operator<<(std::ostream& os, const Song& song) {
        os << song.name << " (" << song.duration << " minutes)";
        return os;
    }
};

// Structure to represent a Playlist
struct Playlist {
    Song* head;

    // Default constructor
    Playlist() { head = nullptr; }

    // Function to add a song to the playlist
    void addSong(std::string name, double duration) {
        Song* newSong = new Song(name, duration);
        if (head == nullptr) {
            head = newSong;
            return;
        }
        Song* temp = head;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newSong;
    }

    // Function to remove the first song in the playlist
    void removeFirstSong() {
        if (head == nullptr) return;
        Song* temp = head;
        head = head->next;
        delete temp;
    }

    // Function to display all songs in the playlist
    void displaySongs() {
        std::cout << "Playlist:" << std::endl;

        Song* temp = head;
        while (temp != nullptr) {
            std::cout << *temp << std::endl;
            temp = temp->next;
        }
    }

    // Destructor to free the memory allocated for the playlist
    ~Playlist() {
        Song* temp = head;
        while (head != nullptr) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
};

int main() {
    Playlist playlist; // Initialize an empty playlist

    // Add songs to the playlist
    playlist.addSong("Song 1", 3.5);
    playlist.addSong("Song 2", 4.2);
    playlist.addSong("Song 3", 2.8);
    playlist.addSong("Song 4", 5.1);


    playlist.displaySongs();

    // Remove the first song in the playlist
    playlist.removeFirstSong();


    std::cout << "After removing the first song:" << std::endl;
    // Display all songs in the playlist 
    playlist.displaySongs();


    return 0;
}