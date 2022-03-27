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
    for (int i = 0; i < len; ++i) {
        for (int j = len - 1; j > i; --j) {
            if (arr[i] + arr[j] == value && (i < j))
                count++;
        }
    }
    return count;
}

int poisk(int* arr, int left, int len, int value) {
  int count = 0, i = left, j = len - 1, sered, x;
  while (i <= j) {
    mid = i + (j - i) / 2;
    if (arr[sered] == value && sered != left && sered != len) {
      count++;
      x = sered;
      while (arr[--sered] == value && sered > left) {
        count++;
      }
      while (arr[++x] == value && x < len) {
        count++;
      }
      return count;
    } else if (arr[sered] > value) {
      j = sered - 1;
    } else {
      i = sered + 1;
    }
  }
  return 0;;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    count += poisk(arr, i, len, value - arr[i]);
  }
  return count;
}
