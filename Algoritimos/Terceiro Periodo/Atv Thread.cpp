#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
#include <condition_variable>

using namespace std;

mutex mtx; 

void escreverArquivo(int id) {
  mtx.lock(); 
  ofstream arquivo("arquivo.txt", ios::app); 
  arquivo << "Thread " << id << " escreveu no arquivo" << endl; 
  arquivo.close(); 
  mtx.unlock();
}

void lerArquivo() {
  mtx.lock();
  ifstream arquivo("arquivo.txt"); 
  string linha;
  while (getline(arquivo, linha)) { 
    cout << linha << endl;
  }
  arquivo.close();
  mtx.unlock();
}

int main() {
  thread threads[5];

  for (int i = 0; i < 5; i++) {
    threads[i] = thread(escreverArquivo, i);
  }

  for (int i = 0; i < 5; i++) {
    threads[i].join();
  }

  lerArquivo();

  return 0;
}

