struct night{
    char nr;
    char freddyaggro;
    char bonnieaggro;
    char chicaaggro;
    char foxyaggro;
};
void setNight(night* n, char id);
void setNightFromAggro(night* n, char freddy, char bonnie, char chica, char foxy);
void handle2AM(night* n);
void handle3AM(night* n);
void handle4AM(night* n);