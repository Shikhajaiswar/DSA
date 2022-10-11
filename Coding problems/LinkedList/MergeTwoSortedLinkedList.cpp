ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *currentNode = NULL;
    ListNode *newHeadNode = NULL;
    if (!list1 && !list2) // checking if both the linkedlist are empty the return null
        return NULL;

    if (list1 == NULL) // checking if first linklist is null then return second linkedlist
        return list2;

    if (list2 == NULL) // checking if second linklist is null then return first linkedlist
        return list1;

    if (list1->val <= list2->val)   //if first list data is small then make its head newhead and start from there
    {
        currentNode = list1;
        newHeadNode = currentNode;
        list1 = list1->next;
    }
    else                            //if second list data is small then make its head newhead and start from there
    {
        currentNode = list2;
        newHeadNode = currentNode;
        list2 = list2->next;
    }


    while (list1 != NULL && list2 != NULL) //now merging start from here
    {
        if (list1->val < list2->val)
        {
            currentNode->next = list1;
            currentNode = currentNode->next;
            list1 = list1->next;
        }
        else if (list2->val < list1->val)
        {
            currentNode->next = list2;
            currentNode = currentNode->next;
            list2 = list2->next;
        }
        else    //if both nodes data is equal then link first then link second in the list
        {
            currentNode->next = list1;
            currentNode = currentNode->next;
            list1 = list1->next;
            currentNode->next = list2;
            currentNode = currentNode->next;
            list2 = list2->next;
        }
    }


    if (!list1 && !list2)  //if both the list exhuasted then return newhead
        return newHeadNode;
    if (!list1)            //if first finishes then point current to link 2 
        currentNode->next = list2;
    if (!list2)            //if first finishes then point current to link 2 
        currentNode->next = list1;


    return newHeadNode;   //at the end return  the newHead
}