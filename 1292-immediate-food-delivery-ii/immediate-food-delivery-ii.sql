SELECT ROUND(COUNT(IF(d.order_date = d.customer_pref_delivery_date, 1, NULL)) * 100.0 / COUNT(*),2) AS immediate_percentage
FROM Delivery d
JOIN (
    SELECT customer_id, MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id
) first_orders
ON d.customer_id = first_orders.customer_id 
   AND d.order_date = first_orders.first_order_date;
