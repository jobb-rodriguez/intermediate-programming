#include <iostream>
#include <string>
using namespace std;

struct browsedLink {
    string name;
    string link;
    browsedLink *next;
};

struct browsedLink *head = NULL;

void pushBack(string name, string link) {
    browsedLink *newLink = new browsedLink;
    newLink->name = name;
    newLink->link = link;
    newLink->next = NULL;
    
    if(head == NULL) {
        head = newLink;
        return;
    }
    
    browsedLink *lastLink = head;
    
    while(lastLink->next != NULL) {
        lastLink = lastLink->next;
    }
    lastLink->next = newLink;
}

void displayBrowsingHistory() {
    browsedLink *lastLink = head;
    
    while(lastLink->next != NULL) {
        cout << lastLink->name << " - " << lastLink->link << "\n";
        lastLink = lastLink->next;
    }
    cout << lastLink->name << " - " << lastLink->link << "\n";
}

void popBack() {
    browsedLink *lastLink = head;
    browsedLink *prevLink = NULL;
    int length = 0;
    
    while(lastLink->next != NULL) {
        prevLink = lastLink;
        lastLink = lastLink->next;
        length++;
    }
    
    cout << lastLink->name << " - " << lastLink->link << " - " << length << "\n";
    
    delete lastLink;
    
    if (prevLink != NULL) prevLink->next = NULL;
}

int main() {
    int numberOfLinks, numberOfPopBacks;
    string name, link;
    
    cin >> numberOfLinks;
    
    if (numberOfLinks <= 0) return 0;
    
    cin >> numberOfPopBacks;
    
    if (numberOfPopBacks <= 0 || numberOfPopBacks > numberOfLinks) return 0;
    
    for (int i = 0; i < numberOfLinks; i++) {
        cin.ignore();
        getline(cin, name);
        cin >> link;
        pushBack(name, link);
    }
    
    displayBrowsingHistory();
    
    for (int i = 0; i < numberOfPopBacks; i++) {
        popBack();
    }
    
    return 0;
}