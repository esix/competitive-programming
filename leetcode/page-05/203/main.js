/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
  for (let el = head; el; el = el.next) {
      while (el.next && el.next.val === val) {
          el.next = el.next.next;
      }
  }
  return (head && head.val === val) ? head.next : head;
};
