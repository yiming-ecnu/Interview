//
// Created by ASUS on 2019/3/28.
//

#include "InsertSort.h"
#include "BubbleSort.h"
#include "SelectSort.h"
#include "ShellSort.h"
#include <algorithm>

int main(void){
    vector<int> numbres;
    for(int i = 0;i<100;i++)
    {
        numbres.push_back(i);
    }
    std::random_shuffle(numbres.begin(),numbres.end());

    cout<<endl;
    //insertSort(numbres);
    //bubbleSort(numbres);
    //selectSort(numbres);
    shellSort(numbres);
}