/*

Question 3: Create a C++ program that manages a to-do list using a vector. Your program should allow the user to:

Add a new task to the to-do list.
Display all tasks in the to-do list.
Remove a task from the to-do list by its position number.
Clear the entire to-do list.

*/

#include <bits/stdc++.h>

using namespace std;

void addTask(vector<string> &todo, string task){
    todo.push_back(task);
}

void displayTasks(vector<string>& todo){

    if(todo.empty()){
        cout << "No tasks present";
    }
    
    else{
        for (string task : todo)
        {
            cout << task << endl;
        }
    }
}

void removeTask(vector<string>& todo, int position){
    if(position < 1 || position > todo.size()){
        cout << "Invalid position" << endl;
        return;
    }

    todo.erase(todo.begin() + position - 1);
    cout << "Task at position " << position << " removed." << endl;
}

void clearList(vector<string> &todo)
{
    todo.clear();
}

    int main()
{

    vector<string> todo;

    addTask(todo, "Do your homework");
    addTask(todo, "Drink milk");
    addTask(todo, "Go to gym");
    addTask(todo, "Go to school");

    displayTasks(todo);

    removeTask(todo, 3);

    displayTasks(todo);

    // remove all
    

    cout << "REMOVED ALL"<<endl;
    clearList(todo);

    displayTasks(todo);
    return 0;
}