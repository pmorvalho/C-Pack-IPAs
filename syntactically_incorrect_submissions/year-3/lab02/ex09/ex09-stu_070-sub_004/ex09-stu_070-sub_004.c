
int main ()
{
    int segundos, minutos, horas;
    
    scanf("%d", &segundos);
    
    minutos = segundos / 60;
    segundos = segundos % 60;
    horas = minutos / 60;
    minutos = minutos % 60;
    
    printf("%02d:%02d:%02d", horas, minutos, segundos);
    return 0;
}