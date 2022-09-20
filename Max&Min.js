function solution(s) {
    var answer = '';
    let str = s.split(' ');
    for(let i=0; i<str.length; i++){
        str[i] = Number(str[i]);
    }
    let Max = str[0];
    let Min = str[1];
    
    if (Max < Min){
        Max = str[1];
        Min = str[0];
    }
    
    for(let i=2; i<str.length; i++){
        if( str[i] > Max) Max = str[i];
        if(str[i]<Min) Min = str[i];
    }

   answer = `${Min} ${Max}`

    console.log(answer);
    return answer;
}