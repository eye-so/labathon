#include <stdio.h>

struct item {
  char name[50];
  float price;
  float weight;
  float total_price;
};

typedef struct item Item;

Item input_item()
{
  Item i;
  printf("Enter the name, price per unit weight and weight of the item: ");
  scanf("%s%f%f",i.name,&i.price, &i.weight);
  return i;
}

int input()
{
  int n;
  printf("Number of items: ");
  scanf("%d", &n);
  return n;
}

void input_many_items(int n, Item is[n])
{
  for(int i=0; i<n; i++) {
    is[i]=input_item();
  }
}

void compute_total_price(Item *i)
{
  i->total_price = i->price * i->weight;
}


float compute_grand_total(int n, Item is[])
{
  float grand_total = 0;
  for(int i=0; i<n; i++){
    compute_total_price(&is[i]);
    grand_total += is[i].total_price;
  }
  return grand_total;
}

void print_item(Item i)
{
  printf("%s %.2f %.2f %.2f\n", i.name, i.price, i.weight, i.total_price);
}

void print_bill(int n, Item is[n], float grand_total)
{
  for(int i=0; i<n; i++) {
    print_item(is[i]);
  }
  printf("Grand total = %.2f\n",grand_total);
}

int main()
{
  int n = input();
  Item is[n];
  input_many_items(n, is);
  float grand_total = compute_grand_total(n, is);
  print_bill(n, is, grand_total);
  return 0;
}
