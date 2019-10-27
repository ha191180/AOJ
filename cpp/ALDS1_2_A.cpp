#include <iostream>
using namespace std;
static int counter = 0;
int A[100], n;

int bubble_ans(int A[], int N){
  int sw = 0;
  bool flag = 1;
  for(int i = 0 ; flag ; i++){
    flag = 0;
    for (int j = N - 1; j >= i + 1; j--){
      if( A[j] < A[j-1]){
        swap( A[j], A[j - 1]);
        flag = 1;
        sw++;
      }
    }
  }
  return sw;
}

void bubble_myself(int *A, int N) {
  bool flag = 1;
  while (flag) {
    for (int i = N - 1; i > 1; i--) {
      flag = 0;
      if (A[i] < A[i-1]) {
        int tmp;
        tmp = A[i];
        A[i] = A[i-1];
        A[i-1] = A[i];
        counter++;
        flag = 1;
      }
    }
  }
}

void input(int *A,int n){
  cin >> n;
  for (int i = 0; i < n ; i++) {
    cin >> A[i];
  }
}

/*
void output(int *A,int n) {
  for (int i  = 0; i < n; i++) {
    if (i != 0)cout << " ";
    cout << A[i];
  }
  cout << endl;
}
*/


int main(){
  input(&A,n)
  counter = bubble_ans(A,n);
  for (int i  = 0; i < n; i++) {
    if (i != 0)cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << counter << endl;
  return 0;
}
