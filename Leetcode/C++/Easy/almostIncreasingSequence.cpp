bool solution(vector<int> sequence) {
   int done = -1;
   int i;
   for ( i = 0; i < sequence.size()-1;i++){
       cout << sequence[i] << " "<<i << ">=" << sequence[i+1] << endl;; 
       if (sequence[i] >= sequence[i+1]){
           cout << "ran"<<endl;
           done++;
           if (done <= 0) {
               cout << "erased"<<endl;
               sequence.erase(sequence.begin()+i);
               i = -1;
               continue;
           }
       }
   }
   for (int i = 0; i < sequence.size();i++){
       cout << sequence[i] << " ";
   }
   cout << endl;
   if (done >0) return false;
   return true;
}

