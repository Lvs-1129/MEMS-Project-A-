#define ASSET_H

int main(){
  struct Asset {
       int id;
       char name[50];
       float value[30]
       char condition;
       char department[50];
  };
void assetMenu();
void addAsset();
void displayAsset();

}
