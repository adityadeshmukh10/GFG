//{ Driver Code Starts
// Java program to demonstrate working of Scanner in Java
import java.util.*;
import java.io.*;
class Abc
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int[] a[],b;
            a= new int[n][n];
            b= new int[n];
            int sum=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int p=sc.nextInt();
                    a[i][j]=p;
                }
            }
            int Max=0;
            for(int i=0;i<n;i++)
            {
                int p=sc.nextInt();
                b[i]=p;
            }
            Complete obj = new Complete();
            ArrayList<Integer> ans;
            ans = obj.array(a, b, n);
            for(int i: ans)
                System.out.print(i + " ");
            System.out.println();
        }
    }
}


// } Driver Code Ends


class Complete
{
    public static ArrayList<Integer> array(int a[][], int b[], int n)
    {
        // Complete the function
         int sum=0;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(i==j)
              {
                  sum=sum+a[i][j];
              }
          }
      }

      // Finding Max element from 1D array
      int max=b[0];
      for(int i=1;i<b.length;i++)
      {
          if(b[i]>max)
          {
              max=b[i];
          }
      }

      // created ArrayList and stored sum of diagonal elements and max of 1D array 
      ArrayList<Integer> li=new ArrayList<Integer>();
      li.add(sum);
      li.add(max);
      return li;
    }
}
