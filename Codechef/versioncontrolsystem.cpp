#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair

//constants for problem solving

void testCase(int numCase){
    int N, M, K; cin >> N >> M >> K;
    
    int files[N+1]  = {0};
    
    for(int i = 0; i < M; i++){
        int tmp; cin >> tmp;
        
        files[tmp]++;
    }
    
    for(int i = 0; i < K; i++){
        int tmp; cin >> tmp;
        files[tmp]++;
    }
    
    int nb_t_i = 0, nb_ut_ui = 0;
    
    for(int i = 1; i <= N; i++){
        if(files[i] == 2) nb_t_i++;
        
        else if(files[i] == 0) nb_ut_ui++;
    }
    
    cout << nb_t_i << " " << nb_ut_ui << "\n";
    
    //cout << "Case #" << numCase << ": ";
}

int main(){
    //cout<< fixed << setprecision(2) << "\n";

    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for(int i = 1; i <= T; i++) testCase(i);

    return 0;
}
