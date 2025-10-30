#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "CANDIES_MATH";

void app_main(void)
{
    // 🍬 แบบฝึกหัดที่ 1: เปลี่ยนจำนวนถุงลูกอม
    int candy_bags = 7;         // เปลี่ยนจาก 5 → 7 ถุง
    int candies_per_bag = 8;    // เปลี่ยนจาก 6 → 8 เม็ดต่อถุง
    int total_candies = candy_bags * candies_per_bag;

    ESP_LOGI(TAG, "🍬 เริ่มต้นโปรแกรมนับลูกอมในถุง 🍬");
    ESP_LOGI(TAG, "====================================");

    ESP_LOGI(TAG, "📖 โจทย์:");
    ESP_LOGI(TAG, "   มีถุงลูกอม: %d ถุง", candy_bags);
    ESP_LOGI(TAG, "   ถุงละ: %d เม็ด", candies_per_bag);
    ESP_LOGI(TAG, "   ❓ มีลูกอมทั้งหมดกี่เม็ด?");
    ESP_LOGI(TAG, "");

    vTaskDelay(2000 / portTICK_PERIOD_MS);

    ESP_LOGI(TAG, "🧮 ขั้นตอนการคิด:");
    ESP_LOGI(TAG, "   %d × %d = %d เม็ด", candy_bags, candies_per_bag, total_candies);
    ESP_LOGI(TAG, "");

    ESP_LOGI(TAG, "✅ คำตอบ:");
    ESP_LOGI(TAG, "   มีลูกอมทั้งหมด %d เม็ด", total_candies);
    ESP_LOGI(TAG, "");

    // 📝 แบบฝึกหัดที่ 2: เพิ่มลูกอมหลายรส
    int strawberry_bags = 3;
    int orange_bags = 2;
    int grape_bags = 4;

    int total_flavored_bags = strawberry_bags + orange_bags + grape_bags;
    int total_flavored_candies = total_flavored_bags * candies_per_bag;

    ESP_LOGI(TAG, "🍓 สตรอเบอร์รี่: %d ถุง = %d เม็ด", 
             strawberry_bags, strawberry_bags * candies_per_bag);
    ESP_LOGI(TAG, "🍊 รสส้ม: %d ถุง = %d เม็ด", 
             orange_bags, orange_bags * candies_per_bag);
    ESP_LOGI(TAG, "🍇 รสองุ่น: %d ถุง = %d เม็ด", 
             grape_bags, grape_bags * candies_per_bag);
    ESP_LOGI(TAG, "รวมทั้งหมด = %d เม็ด", total_flavored_candies);
    ESP_LOGI(TAG, "");

    // 📝 แบบฝึกหัดที่ 3: สร้างตารางสูตรคูณ
    ESP_LOGI(TAG, "📊 ตารางสูตรคูณของ %d:", candies_per_bag);
    for (int i = 1; i <= 10; i++) {
        ESP_LOGI(TAG, "   %d × %d = %d", i, candies_per_bag, i * candies_per_bag);
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "");

    // 📝 แบบฝึกหัดที่ 4: แจกลูกอมให้เพื่อน
    int friends = 12;
    int candies_per_friend = total_flavored_candies / friends;
    int remaining_candies = total_flavored_candies % friends;

    ESP_LOGI(TAG, "👥 แจกให้เพื่อน %d คน:", friends);
    ESP_LOGI(TAG, "   คนละ %d เม็ด", candies_per_friend);
    ESP_LOGI(TAG, "   เหลือ %d เม็ด", remaining_candies);
    ESP_LOGI(TAG, "");

    ESP_LOGI(TAG, "📚 สรุปสิ่งที่เรียนรู้วันนี้:");
    ESP_LOGI(TAG, "   - การคูณจำนวน");
    ESP_LOGI(TAG, "   - การแจกแจง");
    ESP_LOGI(TAG, "   - การหารเอาเศษ (modulo)");
    ESP_LOGI(TAG, "   - ตารางสูตรคูณ");
    ESP_LOGI(TAG, "");

    ESP_LOGI(TAG, "🎉 จบโปรแกรมแบบฝึกหัดนับลูกอม 🍬");

    vTaskDelay(3000 / portTICK_PERIOD_MS);
}