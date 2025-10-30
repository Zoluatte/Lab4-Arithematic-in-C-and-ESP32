#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "COOKIES_MATH";

void app_main(void)
{
    ESP_LOGI(TAG, "🍪 เริ่มต้นโปรแกรมแบ่งคุกกี้ 🍪");
    ESP_LOGI(TAG, "================================");

    // 📝 แบบฝึกหัดที่ 1: เปลี่ยนจำนวนคุกกี้และเพื่อน
    int total_cookies = 24;      // เดิม 12 → เพิ่มเป็น 24 ชิ้น
    int number_of_friends = 6;   // เดิม 4 → เพิ่มเป็น 6 คน

    int cookies_per_person;
    int remaining_cookies;

    // แสดงข้อมูลเริ่มต้น
    ESP_LOGI(TAG, "📖 โจทย์:");
    ESP_LOGI(TAG, "   มีคุกกี้: %d ชิ้น", total_cookies);
    ESP_LOGI(TAG, "   จะแบ่งให้เพื่อน: %d คน", number_of_friends);
    ESP_LOGI(TAG, "   ❓ แต่ละคนได้คุกกี้กี่ชิ้น?");
    ESP_LOGI(TAG, "");

    vTaskDelay(2000 / portTICK_PERIOD_MS);

    // ตรวจสอบการหารด้วยศูนย์
    if (number_of_friends == 0) {
        ESP_LOGE(TAG, "❌ ข้อผิดพลาด: ไม่สามารถหารด้วยศูนย์ได้!");
        return;
    }

    // คำนวณผลหารและเศษ
    cookies_per_person = total_cookies / number_of_friends;
    remaining_cookies = total_cookies % number_of_friends;

    // 📝 แบบฝึกหัดที่ 2: ตรวจสอบว่าหารลงตัวหรือไม่
    if (remaining_cookies == 0) {
        ESP_LOGI(TAG, "✅ หารลงตัว! ทุกคนได้เท่ากัน");
    } else {
        ESP_LOGI(TAG, "⚠️ หารไม่ลงตัว! เหลือ %d ชิ้น", remaining_cookies);
    }

    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "🧮 ขั้นตอนการคิด:");
    ESP_LOGI(TAG, "   %d ÷ %d = %d (เศษ %d)", 
             total_cookies, number_of_friends, cookies_per_person, remaining_cookies);

    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "✅ คำตอบ:");
    ESP_LOGI(TAG, "   คนละ %d ชิ้น", cookies_per_person);
    if (remaining_cookies > 0) {
        ESP_LOGI(TAG, "   เหลือ %d ชิ้น", remaining_cookies);
    }

    // ภาพประกอบ
    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "🎨 แสดงการแจกคุกกี้:");
    for (int i = 1; i <= number_of_friends; i++) {
        ESP_LOGI(TAG, "   เพื่อนคนที่ %d: 🍪 x %d", i, cookies_per_person);
    }

    if (remaining_cookies > 0) {
        ESP_LOGI(TAG, "   คุกกี้เหลือ: 🍪 x %d", remaining_cookies);
    }

    // 📝 แบบฝึกหัดที่ 3: หาจำนวนเพื่อนที่ทำให้หารลงตัว
    int cookies = 30;
    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "🔍 คุกกี้ %d ชิ้น หารลงตัวกับ:", cookies);
    for (int people = 1; people <= 10; people++) {
        if (cookies % people == 0) {
            ESP_LOGI(TAG, "   ✅ %d คน → คนละ %d ชิ้น", 
                     people, cookies / people);
        }
    }

    // สรุป
    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "📚 สรุปสิ่งที่เรียนรู้:");
    ESP_LOGI(TAG, "   - การหารและการใช้ %% เพื่อหาเศษ");
    ESP_LOGI(TAG, "   - ตรวจสอบหารด้วยศูนย์");
    ESP_LOGI(TAG, "   - การตรวจสอบว่า 'หารลงตัว'");
    ESP_LOGI(TAG, "   - ฝึกใช้ for-loop และ if อย่างมีเงื่อนไข");

    ESP_LOGI(TAG, "");
    ESP_LOGI(TAG, "🎉 จบโปรแกรมแบ่งคุกกี้!");
    vTaskDelay(2000 / portTICK_PERIOD_MS);
}