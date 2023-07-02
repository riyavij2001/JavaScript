# Schedulizer

Schedulizer is a web application developed using HTML, CSS, and JavaScript. It provides a visual representation of three common scheduling algorithms: First-Come, First-Served (FCFS), Shortest Job First (SJF), and Round Robin.

## Installation

To run the Schedulizer project locally, follow these steps:

- Clone the repository or download the project files.
- Make sure you have a web browser installed on your computer (e.g., Google Chrome, Mozilla Firefox).
- Open the index.html file in your preferred web browser.


## Usage
Once the Schedulizer project is running, you will see a user interface with options to select different scheduling algorithms and configure their parameters. Here's how you can use the application:

1. Select a scheduling algorithm from the available options: FCFS, SJF, or Round Robin.
2. Provide the necessary inputs for the selected algorithm. For example, if you choose FCFS or SJF, you need to enter the arrival time and burst time for each process. If you select Round Robin, you also need to specify the time quantum.
3. Click on the "Run" or "Start" button to initiate the scheduling simulation.
4. The application will visualize the scheduling process, displaying the order in which the processes are executed and the turnaround time for each process.
5. You can adjust the speed of the simulation using the provided controls.
6. Repeat the above steps to try different scheduling algorithms or input values.

## Scheduling Algorithms
### First-Come, First-Served (FCFS)
The FCFS algorithm executes processes in the order they arrive. It is a non-preemptive scheduling algorithm, meaning that once a process starts executing, it continues until it completes or voluntarily releases the CPU.

### Shortest Job First (SJF)
The SJF algorithm selects the process with the shortest burst time next. It can be either preemptive or non-preemptive. In the preemptive version, if a new process arrives with a shorter burst time than the one currently executing, the CPU switches to the new process. In the non-preemptive version, the selected process continues execution until completion.

### Round Robin
The Round Robin algorithm allocates a fixed time slice, known as a quantum, to each process in a cyclic manner. If a process does not complete within its time quantum, it is moved to the end of the queue, and the CPU switches to the next process. This algorithm is preemptive, allowing fair time allocation among processes.

## Contributing
If you wish to contribute to the Schedulizer project, follow these steps:

1. Fork the repository.
2. Make your desired changes and improvements.
3. Test the project thoroughly to ensure it functions correctly.
4. Submit a pull request, clearly describing the changes you have made.

## License
The Schedulizer project is licensed under the MIT License. You are free to use, modify, and distribute the project in accordance with the terms of the license.