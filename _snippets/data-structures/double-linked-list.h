struct Lst {
  int value;
  Lst* prev;
  Lst* next;

  Lst(int v) : value(v), next(this), prev(this) {}
};


Lst* append(Lst* lst1, Lst* lst2) {
  if (lst1 == NULL) return lst2;
  if (lst2 == NULL) return lst1;

  Lst* lst2_first = lst2;
  Lst* lst2_last = lst2->prev;

  lst2->prev->next = lst1;
  lst2->prev = lst1->prev;

  lst1->prev->next = lst2_first;
  lst1->prev = lst2_last;
  
  return lst1;
}


Lst* append(Lst* lst1, int value) {
  return append(lst1, new Lst(value));
}

