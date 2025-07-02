#include <bits/stdc++.h>
using namespace std;
vector<int> arr, segm_tree;

void recalculate(int node){
    segm_tree[node] = segm_tree[2*node+1] + segm_tree[2*node+2];
}

void build(int node, int left, int right){
    //left and right: indexes that represent the part of the array hat the node is responsible for.
    if(left == right){
        segm_tree[node] = arr[left];
    }else{
        // there are more children. 
        int mid = (left+right)/2;
        build(2*node + 1, left, mid);
        build(2*node + 2, mid+1, right);
        recalculate(node); // so the current node eventually gets the value of its children
        //node is just index in segment tree vectyor representation.
    }
}

void update(int node, int left, int right, int x, int y){
    if(left == right){
        segm_tree[node] = y;
    }else{
        int mid = (left+right)/2; // also idx in array
        if(x<=mid){
            update(2*node + 1, left, mid, x, y);
        }else{
            update(2*node + 2, mid + 1, right, x, y);
        }
    }
    recalculate(node);
    //x is position in original array
    // y is value for update
    //left and right are the array values being represented.
}
int query(int node, int left, int right, int l, int r) {
    if (r < left || right < l)
        return 0; // No overlap
    if (l <= left && right <= r)
        return segm_tree[node]; // Total overlap

    int mid = (left + right) / 2;
    int q1 = query(2 * node + 1, left, mid, l, r);
    int q2 = query(2 * node + 2, mid + 1, right, l, r);
    return q1 + q2;
}
int main(){

}