//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool comp(Item a,Item b){
        double r1=(double)a.value/(double)a.weight;
         double r2=(double)b.value/(double)b.weight;
         return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double currweight=0;
        double finalvalue=0;
        for(int i=0;i<n;i++){
            if(currweight+arr[i].weight<=W){
                currweight+=arr[i].weight;
                finalvalue+=arr[i].value;
            }
            else{
                double temp=W-currweight;
                finalvalue+=((double)arr[i].value/(double)arr[i].weight)*temp;
                break;
            }
        }
        return finalvalue;
    }
        
};
