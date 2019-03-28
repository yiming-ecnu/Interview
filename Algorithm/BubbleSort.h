//
// Created by ASUS on 2019/3/28.
//

#ifndef INTERVIEW_BUBBLESORT_H
#define INTERVIEW_BUBBLESORT_H

#endif //INTERVIEW_BUBBLESORT_H

#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &nums)
{
    for(int i = 0;i<nums.size();i++)
    {
        for (int j = i+1; j < nums.size(); ++j)
        {
            if(nums[i]>nums[j])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    for(vector<int>::iterator it = nums.begin();it!=nums.end();it++)
    {
        cout<<*it<<", ";
    }
    cout<<endl;
}