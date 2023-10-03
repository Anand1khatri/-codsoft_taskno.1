#include <iostream>
#include <string>
using namespace std;
const int MAX_TASKS = 100; // Maximum number of tasks

struct Task {
     string description;
    bool completed;
};

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;

    while (true) {
         cout << "\n\t\t\t\t\t\tTo do List Manager" <<  endl;
         cout << "1. Add Task" <<  endl;
         cout << "2. View Tasks" <<  endl;
         cout << "3. Mark Task as Completed" <<  endl;
         cout << "4. Remove Task" <<  endl;
         cout << "5. Exit" <<  endl;
         cout << "Select an option: ";

        int choice;
         cin >> choice;

        switch (choice) {
            case 1:
                 cin.ignore(); // Clear newline character from previous input
                if (taskCount < MAX_TASKS) {
                     cout << "Enter task description: ";
                     string description;
                     getline( cin, description);
                    tasks[taskCount].description = description;
                    tasks[taskCount].completed = false;
                    taskCount++;
                     cout << "Task added." <<  endl;
                } else {
                     cout << "Task limit reached. Cannot add more tasks." <<  endl;
                }
                break;
            case 2:
                 cout << "\nTask List:" <<  endl;
                for (int i = 0; i < taskCount; ++i) {
                     cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description <<  endl;
                }
                break;
            case 3:
                 cout << "Enter the index of the task to mark as completed: ";
                int completeIndex;
                 cin >> completeIndex;
                if (completeIndex >= 0 && completeIndex < taskCount) {
                    tasks[completeIndex].completed = true;
                     cout << "Task marked as completed." <<  endl;
                } else {
                     cout << "Invalid task index." <<  endl;
                }
                break;
            case 4:
                 cout << "Enter the index of the task to remove: ";
                int removeIndex;
                 cin >> removeIndex;
                if (removeIndex >= 0 && removeIndex < taskCount) {
                    for (int i = removeIndex; i < taskCount - 1; ++i) {
                        tasks[i] = tasks[i + 1];
                    }
                    taskCount--;
                     cout << "Task removed." <<  endl;
                } else {
                     cout << "Invalid task index." <<  endl;
                }
                break;
            case 5:
                 cout << "Goodbye!" <<  endl;
                return 0;
            default:
                 cout << "Invalid choice. Please try again." <<  endl;
        }
    }

    return 0;
}

