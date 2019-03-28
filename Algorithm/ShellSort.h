//
// Created by ASUS on 2019/3/28.
//

#ifndef INTERVIEW_SHELLSORT_H
#define INTERVIEW_SHELLSORT_H

#endif //INTERVIEW_SHELLSORT_H

#include <vector>
#include <iostream>
using namespace std;

void shellSort(vector<int> &nums){

    for(int gap = nums.size()/2;gap>0;gap = gap/2)
    {
        for(int i = gap;i<nums.size();i++)
        {
            int temp = nums[i];
            for(int j = i-gap;j>=0;j-=gap)
            {
                if(temp<nums[j])
                {
                    nums[j+gap] = nums[j];
                    nums[j] = temp;
                }
                else
                    break;
            }
        }
    }

    for(vector<int>::iterator it = nums.begin();it!=nums.end();it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
}