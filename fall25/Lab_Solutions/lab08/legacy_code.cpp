#include <iostream>
#include <vector>
#include <string>
int main(){
std::vector<int> ids;
 std::vector<std::string> names;
 std::vector<std::string> grades;
 std::vector<std::string> programs;
int choice;
 bool running=true;
int nextID=0;

 while(running){std::cout<<"\n0-help 1-add 2-report 3-find 4-quit\n";
std::cin>>choice;
if(choice==0){std::cout<<"\n0-help 1-add 2-report 3-find 4-quit\n";}
else if(choice==1){int n;std::cin>>n;
for(int i=0;i<n;i++){
std::string name,grade,program;std::cin>>name>>grade>>program;
ids.push_back(nextID++);
 names.push_back(name);
 grades.push_back(grade); programs.push_back(program);
}}
else if(choice==2){
for(int i=0;i<ids.size();i++){std::cout<<ids[i]<<" "<<names[i]<<" "<<grades[i]<<" "<<programs[i]<<"\n";}}
else if(choice==3){
int searchID; std::string searchProgram; std::cin>>searchID; bool found=false;
if(searchID>=0 && searchID<ids.size()){std::cout<<ids[searchID]<<" "<<names[searchID]<<" "<<grades[searchID]<<" "<<programs[searchID]<<"\n";found=true;}
if(!found){std::cin>>searchProgram;for(int i=0;i<programs.size();i++){if(programs[i]==searchProgram)std::cout<<names[i]<<"\n";}}}
else if(choice==4) running=false;
else std::cout<<"idk\n";
}
return 0;
}

