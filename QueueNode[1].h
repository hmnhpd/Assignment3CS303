#pragma once

struct QueueNode {
  int data;
  QueueNode *next;

  QueueNode(int data, QueueNode* next) : data(data), next(next) {}
};