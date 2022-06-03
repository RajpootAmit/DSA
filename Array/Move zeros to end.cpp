void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
   int i=0;

   for(int j=0;j<arr.size();j++){

       if(arr[j]!=0){

           swap(arr[j],arr[i]);

           i++;

       }

   }

}
