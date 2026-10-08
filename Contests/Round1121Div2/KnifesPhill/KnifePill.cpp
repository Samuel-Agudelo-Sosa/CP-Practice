 #include <bits/stdc++.h>
 using namespace std;
 
 void solve() {
   int n, m; cin >> n >> m;
   vector<long long>nums(n,0);
   for(long long &num: nums) cin >> num;

    if(m == 1){
        long long max_val = nums[0];
        for (int i = 1; i < n; i++) max_val = max(max_val, nums[i]);
        cout << max_val << "\n";
        return;
    }

   priority_queue<long long> maxHeap;
   long long suma = 0;
   long long max_score = LLONG_MIN;
   for(int i = 0; i < n - 1; i++){
    maxHeap.push(nums[i]);
    suma += nums[i];
 
    if(i >  m - 2){
        suma -= maxHeap.top();
        maxHeap.pop();
        
    }
       if(i >= m - 2){
        long long score = m * nums[i + 1] - suma;
        max_score = max(max_score, score); 
    }


   }

   cout << max_score << "\n";

 }
 
 int main() {
     // Optimización de entrada/salida para CP
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     int t = 1;
     cin >> t; // Descomentar si hay múltiples casos de prueba
     while(t--) {
         solve();
     }
     return 0;
 }