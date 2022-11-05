package Easy.check_point_test;

import java.util.HashMap;

public class q2 {
    public static void main(String[] args) {
        int x = 10;
        String str = "The quick brown fox jumps over the lazy dog";

    }
    public static int solution(int[][] A) {
        HashMap<Integer,HashMap<Integer,Integer>> allDoctors= new HashMap<Integer,HashMap<Integer,Integer>>();
        for (int i = 0; i <A.length ; i++) {
            for (int j = 0; j < A[0].length; j++) {
                  if(allDoctors.containsKey(A[i][j]))
                  {
                      if(!allDoctors.get(A[i][j]).containsKey(i))
                      {
                          HashMap<Integer,Integer> currHospitals = allDoctors.get(A[i][j]);
                          currHospitals.put(i,i);
                          allDoctors.put(A[i][j],currHospitals);
                      }
                  }
                  else {
                      HashMap<Integer,Integer> hospitals= new HashMap<Integer,Integer> ();
                      hospitals.put(i,i);
                      allDoctors.put(A[i][j],hospitals);

                  }
            }
        }
        int counter = 0;
        for (HashMap<Integer,Integer> currDoc:
             allDoctors.values()) {
            if(currDoc.size()>1)
            {
                counter++;
            }

        }
        return counter;
    }
}
