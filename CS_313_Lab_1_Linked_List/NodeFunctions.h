#pragma once
#include "Node.h"
//Interface (Add, Search, Delete)

bool searchValue(Node* head, int target);

void addValue(Node*& head, int newVal);

void deleteValue(Node*& head, int target);