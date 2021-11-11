void sgs_clib_convert_to_lower(char *message){
    for(;*message!='\0';message++){
        if(*message<=91&&*message>=65){
            *message=*message+32;
        }
    }
}