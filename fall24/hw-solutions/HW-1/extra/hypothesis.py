import random
import matplotlib.pyplot as plt
from typing import List, Tuple


def walker(n: int, trials: int) -> Tuple[int, float]:
    """
    Simulates random walks for `trials` experiments, each with `n` steps.
    Returns the pair (n, mean_squared_distance).

    :param n: Number of steps in each random walk.
    :param trials: Number of experiments to run.
    :return: A tuple containing the number of steps and the mean squared distance.
    """
    total_squared_distance: float = 0.0

    # Perform the specified number of trials
    for i in range(trials):
        x, y = 0, 0  # Start at the origin

        # Simulate a random walk of n steps
        for _ in range(n):
            direction: int = random.randint(
                0, 3
            )  # Random direction: 0 = north, 1 = east, 2 = south, 3 = west

            if direction == 0:
                y += 1  # Move north
            elif direction == 1:
                x += 1  # Move east
            elif direction == 2:
                y -= 1  # Move south
            elif direction == 3:
                x -= 1  # Move west

        # Calculate the squared Euclidean distance from the origin for this trial
        squared_distance: int = x * x + y * y

        # Add the squared distance to the total
        total_squared_distance += squared_distance

    # Calculate the mean squared distance
    mean_squared_distance: float = total_squared_distance / trials

    # Print the mean squared distance
    print(f"n = {n}, mean squared distance = {mean_squared_distance}")

    return (n, mean_squared_distance)


def plot_mean_squared_distance(trials: int) -> None:
    """
    Plots the mean squared distance as a function of n from 1 to 100.

    :param trials: Number of experiments for each n.
    """
    results: List[Tuple[int, float]] = []

    # Loop over n values from 1 to 100
    for n in range(1, 101):
        result = walker(n, trials)
        results.append(result)

    # Unpack results into two lists: n values and corresponding mean squared distances
    n_values, mean_squared_distances = zip(*results)

    # Plotting the results
    plt.figure(figsize=(10, 6))
    plt.plot(n_values, mean_squared_distances, marker="", linestyle="-", color="b")
    plt.title(f"Mean Squared Distance vs. Number of Steps (Trials = {trials})")
    plt.xlim(0, max(n_values))  # Set x-axis limits
    plt.ylim(bottom=0)  # Remove negative part of the y-axis
    plt.xlabel("Number of Steps (n)")
    plt.ylabel("Mean Squared Distance")
    plt.grid(False)  # Turn off the grid
    plt.savefig("hypothesis.png")  # Save the figure
    plt.show()


# Example of usage
trials = 10000  # Number of trials for each n
plot_mean_squared_distance(trials)
