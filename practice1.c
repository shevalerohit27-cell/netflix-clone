
int calpercentage(int science,int math,int sanskrit);
int main(){

    int science=98;
    int math=95;
    int sanskrit=99;

    printf("percentage is :%d ",calpercentage(science,math,sanskrit));
    return 0;

}
int calpercentage(int science,int math,int sanskrit){
    return ((science+math+sanskrit)/3);

    
}