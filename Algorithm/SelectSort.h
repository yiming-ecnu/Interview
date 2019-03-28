//
// Created by ASUS on 2019/3/28.
//

#ifndef INTERVIEW_SELECTSORT_H
#define INTERVIEW_SELECTSORT_H

#endif //INTERVIEW_SELECTSORT_H
#include <iostream>
#include <vector>
using namespace std;
void selectSort(vector<int> &nums)
{
    int min_index,temp;

    for(int i = 0;i<nums.size();i++)
    {
        min_index = i;
        for(int j = i;j<nums.size();j++)
        {
            if(nums[j]<nums[min_index])
            {
                min_index = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = temp;
    }

    for(vector<int>::iterator it = nums.begin();it!=nums.end();it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
}