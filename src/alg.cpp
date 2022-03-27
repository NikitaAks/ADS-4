// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] <= value) {
      for (int j = i + 1; j < len - 1; j++) {
        if (arr[i] + arr[j] == value) {
          count++;
        }
      }
    }
  }
  return count;
}

int cbinsearch(int* arr, int left, int len, int value) {
  int count = 0, i = left, j = len - 1, sered, a;
  while (i <= j) {
    sered = i + (j - i) / 2;
    if (arr[mid] == value && sered != left && sered != len) {
      count++;
      a = sered;
      while (arr[--sered] == value && sered > left) {
        count++;
      }
      while (arr[++a] == value && a < len) {
        count++;
      }
      return count;
    } else if (arr[sered] > value) {
      j = sered - 1;
    } else {
      i = sered + 1;
    }
  }
  return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    count += cbinsearch(arr, i, len, value - arr[i]);
  }
  return count;
}
