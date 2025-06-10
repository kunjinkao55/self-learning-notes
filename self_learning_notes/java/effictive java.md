2.builder模式
概括：流式地传递参数来构建对象，builder相当于中间桥梁
```java
public class Drink{  
    private final int size;  
    private final int price;  
    private final String taste;  
    private final String name;  
    public static class Builder{  
        private int size = 0;  
        private int price = 0;  
        private String taste = "None";  
        private  String name = "None";  
        public Builder(int size, int price){  
            this.size = size;  
            this.price = price;  
        }  
        public Builder taste(String val) {taste = val; return this;}  
        public Builder name(String val) {name = val; return this;}  
        public Drink build(){  
            return new Drink(this);  
        }  
    }  
    private Drink(Builder builder){  
        size = builder.size;  
        price = builder.price;  
        name = builder.name;  
        taste = builder.taste;  
    }  
    public void info(){  
        System.out.println("size: " + this.size);  
        System.out.println("price: " + this.price);  
        System.out.println("name: " + this.name);  
        System.out.println("taste: " + this.taste);  
    }  
  
    public static void main(String[] args){  
        Drink cola = new Drink.Builder(330,2).name("Peasi").taste("Sweet").build();  
        cola.info();  
        Drink pannizhe = new Drink.Builder(330,2).taste("Sweet").build();  
        pannizhe.info();  
    }  
  
}
```
