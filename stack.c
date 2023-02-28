struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack* createStack(int cap)
{
    struct ArrayStack* stack;
    stack = malloc(sizeof(struct ArrayStack));
    stack-> capacity=cap;
    stack-> top= -1;
    stack -> array=malloc(sizeof(int)*cap);
    return stack;
}

int isFull(struct ArrayStack* stack)
{
    if (stack->top == stack->capacity-1)
        return(1);
    else
        return(0);
}

int isEmpty(struct ArrayStack* stack)
{
    if (stack->top == -1)
        return(1);
    else 
        return(0);
}

void push(struct ArrayStack* stack, int item)
{
    if (isFull(stack)==1)
        printf("Stack is Full");
        
    else
        stack->top=stack->top+1;
        stack->array[stack->top]==int item;
}

int pop(struct ArrayStack* stack)
{
    if(isEmpty(stack)==1)
       printf("Stack is Empty");
       return(-1);
    else 
       return(stack->array[top]);
       stack->top=stack->top-1;
}

main()
{
    struct ArrayStack *stack;
    stack = createStack(4);
    int choice, item;
    while(1)
    {
        clrscr();
        printf("1. Push" \n "2. Pop" \n "3. Exit")
        scanf("%d",&choice)
        switch(choice)
        {
            case 1:
                printf("Enter a number = ");
                scanf("%d", &item);
                push(stack, item);
                break;
            case 2:
                item = pop(stack);
                if(item==-1)
                    break;
                else
                    printf("Popped value = %d",item);
                    break;
            case 3:
                Exit(0);

        }
        getch();
    }
}