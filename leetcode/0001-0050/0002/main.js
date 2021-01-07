/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    const result = new ListNode(-1);
    let current = result;
    let carry = 0;
    while (l1 || l2) {
        const digit = (l1 ? l1.val : 0) + (l2 ? l2.val : 0) + carry;
        carry = +(digit > 9);
        current.next = new ListNode(digit % 10);
        l1 = l1 ? l1.next : null;
        l2 = l2 ? l2.next : null;
        current = current.next;
    }
    if (carry) {
        current.next = new ListNode(carry);
    }
    return result.next;
};
