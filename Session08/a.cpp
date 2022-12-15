int main(){
    int flag = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(j == 7) {
                flag = 1;
            }
        }
        if(flag == 1) break;
    }
    
    return 0;
}