//
//  sort.h
//  Algorithms - sort algorithms
//
//  Created by YourtionGuo on 10/05/2017.
//  Copyright © 2017 Yourtion. All rights reserved.
//

#ifndef SORT_H
#define SORT_H


/**
 利用插入排序将数组 data 中的元素进行排序 - O(n^2)

 @param data 数据数组
 @param size 元素的个数
 @param esize 每个元素的大小
 @param compare 函数指针，用于比较两个成员大小（大于返回 1，小于返回 -1，等于返回 0）
 @return 成功返回 0；否则返回 -1
 */
int issort(void *data, int size, int esize,
           int (*compare)(const void *key1, const void *key2));


/**
 <#Description#>

 @param data <#data description#>
 @param size <#size description#>
 @param esize <#esize description#>
 @param i <#i description#>
 @param k <#k description#>
 @param compare <#compare description#>
 @return <#return value description#>
 */
int qksort(void *data, int size, int esize, int i, int k,
           int (*compare)(const void *key1, const void *key2));


/**
 <#Description#>

 @param data <#data description#>
 @param size <#size description#>
 @param esize <#esize description#>
 @param i <#i description#>
 @param k <#k description#>
 @param compare <#compare description#>
 @return <#return value description#>
 */
int mgsort(void *data, int size, int esize, int i, int k,
           int (*compare)(const void *key1, const void *key2));


/**
 <#Description#>

 @param data <#data description#>
 @param size <#size description#>
 @param k <#k description#>
 @return <#return value description#>
 */
int ctsort(int *data, int size, int k);


/**
 <#Description#>

 @param data <#data description#>
 @param size <#size description#>
 @param p <#p description#>
 @param k <#k description#>
 @return <#return value description#>
 */
int rxsort(int *data, int size, int p, int k);

#endif /* SORT_H */
