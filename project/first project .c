// todo_list.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define a structure for a task
typedef struct {
    int id;
    char description[100];
    int is_completed;
} Task;

// Function to add a task
void addTask(Task *tasks, int *taskCount, char *description) {
    Task newTask;
    newTask.id = *taskCount + 1;
    strcpy(newTask.description, description);
    newTask.is_completed = 0;
    
    tasks[*taskCount] = newTask;
    (*taskCount)++;
}

// Function to mark a task as completed
void completeTask(Task *tasks, int taskCount, int taskId) {
    for (int i = 0; i < taskCount; i++) {
        if (tasks[i].id == taskId) {
            tasks[i].is_completed = 1;
            break;
        }
    }
}

// Function to delete a task
void deleteTask(Task *tasks, int *taskCount, int taskId) {
    for (int i = 0; i < *taskCount; i++) {
        if (tasks[i].id == taskId) {
            for (int j = i; j < *taskCount - 1; j++) {
                tasks[j] = tasks[j + 1];
            }
            (*taskCount)--;
            break;
       }
    }
}

int main() {
    Task tasks[100];
    int taskCount = 0;
    
    // Your code to interact with Python, handle commands, and manage tasks here
    
    return 0;
}
