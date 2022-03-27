// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int a = i + 1; a < len; a++) {
      if (arr[i] + arr[a] == value)
        count++;
    }
  }
  return count;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int a = len - 1 ; a > i; a--) {
      if (arr[i] + arr[a] == value)
        count++;
    }
  }
  return count;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    int lf = i + 1;
    int rg = len - 1;
    while (lf < rg) {
      if (arr[(lf + rg) / 2] + arr[i] < value) {
        lf = (lf + rg) / 2 + 1;
      } else {
        rg = (lf + rg) / 2;
      }
    }
    while (arr[l] + arr[i] == value) {
      count++;
      lf++;
    }
  }
  return count;
}
