function solution(A,B){
    var answer = 0;
    
    A.sort((a,b)=> a-b); // 오름차순 [1,2,3,4]
    B.sort((a,b)=> b-a); // 내림차순 [4,3,2,1]
    for(let i=0; i<A.length; i++){
        answer += A[i]*B[i];
    }
    
    return answer;
}