#include <iostream>
#include <fstream>
#include <locale>

int main() {
    // ตั้งค่ารองรับภาษาไทยใน Console (สำหรับบางระบบ)
    std::setlocale(LC_ALL, "TH_th");

    // สร้างและเปิดไฟล์ HTML
    std::ofstream webFile("snake_website.html");

    if (!webFile) {
        std::cerr << "เกิดข้อผิดพลาดในการสร้างไฟล์!" << std::endl;
        return 1;
    }

    // เขียนโครงสร้าง HTML และ CSS โค้ดทั้งหมดลงในไฟล์
    webFile << "<!DOCTYPE html>\n"
            << "<html lang=\"th\">\n"
            << "<head>\n"
            << "    <meta charset=\"UTF-8\">\n"
            << "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
            << "    <title>สารานุกรมงูและการเอาตัวรอด</title>\n"
            << "    <style>\n"
            << "        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; line-height: 1.6; margin: 0; padding: 0; background-color: #f4f7f6; color: #333; }\n"
            << "        header { background: #1e3f20; color: #ffffff; padding: 30px 20px; text-align: center; }\n"
            << "        nav { background: #2d5a30; padding: 10px; text-align: center; }\n"
            << "        nav a { color: white; margin: 0 15px; text-decoration: none; font-weight: bold; }\n"
            << "        nav a:hover { text-decoration: underline; }\n"
            << "        .container { max-width: 1000px; margin: 30px auto; padding: 0 20px; }\n"
            << "        .card { background: white; padding: 25px; margin-bottom: 25px; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1); }\n"
            << "        h2 { color: #1e3f20; border-bottom: 2px solid #2d5a30; padding-bottom: 10px; }\n"
            << "        .danger { border-left: 5px solid #d9534f; }\n"
            << "        .first-aid { border-left: 5px solid #0275d8; }\n"
            << "        .warning-box { background-color: #fdf7f7; border: 1px solid #d9534f; padding: 15px; border-radius: 4px; color: #d9534f; font-weight: bold; }\n"
            << "        ul { padding-left: 20px; }\n"
            << "        li { margin-bottom: 10px; }\n"
            << "        footer { text-align: center; padding: 20px; background: #1e3f20; color: white; margin-top: 40px; }\n"
            << "    </style>\n"
            << "</head>\n"
            << "<body>\n\n"

            << "    <header>\n"
            << "        <h1>สถาบันข้อมูลและสารานุกรมเรื่องงู</h1>\n"
            << "        <p>เรียนรู้ ร่วมกัน ป้องกัน และปฐมพยาบาลอย่างถูกวิธี</p>\n"
            << "    </header>\n\n"

            << "    <nav>\n"
            << "        <a href=\"#types\">ชนิดของงู</a>\n"
            << "        <a href=\"#danger\">งูที่ควรระวัง</a>\n"
            << "        <a href=\"#firstaid\">การปฐมพยาบาล</a>\n"
            << "        <a href=\"#prevention\">การป้องกันและการเจอเผชิญหน้า</a>\n"
            << "    </nav>\n\n"

            << "    <div class=\"container\">\n\n"

            // เซกชัน: ชนิดของงู
            << "        <section id=\"types\" class=\"card\">\n"
            << "            <h2>1. ชนิดของงู (งูมีพิษ VS งูไม่มีพิษ)</h2>\n"
            << "            <p>งูในประเทศไทยสามารถแบ่งออกเป็น 2 ประเภทหลักๆ ตามลักษณะทางชีววิทยาและอันตรายต่อมนุษย์ ดังนี้:</p>\n"
            << "            <ul>\n"
            << "                <li><strong>งูไม่มีพิษ:</strong> มักจะไม่มีเขี้ยวพิษ มีเพียงฟันซี่เล็กๆ เวลากัดจะเป็นรอยถลอกหรือรอยฟันสับธรรมดา เช่น งูเหลือม, งูหลาม, งูเขียวทางมะพร้าว, งูสิง และงูปี่แก้ว</li>\n"
            << "                <li><strong>งูมีพิษ:</strong> มีเขี้ยวพิษอยู่ด้านหน้ารอยกัดมักจะมีแผลเป็นจุด 1 หรือ 2 จุดจากเขี้ยวฝัง พิษส่งผลต่อระบบประสาท ระบบโลหิต หรือกล้ามเนื้อ เช่น งูเห่า, งูจงอาง, งูกะปะ, และงูเขียวหางไหม้</li>\n"
            << "            </ul>\n"
            << "        </section>\n\n"

            // เซกชัน: งูที่ควรระวัง
            << "        <section id=\"danger\" class=\"card danger\">\n"
            << "            <h2>2. งูพิษอันตรายที่ควรระวังในไทย</h2>\n"
            << "            <p>งูเหล่านี้มีพิษร้ายแรงและพบเจอได้บ่อยตามพื้นที่เกษตรกรรม หรือแม้แต่ชุมชนเมือง:</p>\n"
            << "            <ul>\n"
            << "                <li><strong>งูเห่า / งูจงอาง:</strong> พิษทำลายระบบประสาท ทำให้กล้ามเนื้ออ่อนแรง หนังตาตก และหายใจล้มเหลว (งูเห่าสามารถพ่นพิษได้หากเข้าตาอาจตาบอด)</li>\n"
            << "                <li><strong>งูกะปะ / งูแมวเซา:</strong> พิษทำลายระบบโลหิต ทำให้เลือดแข็งตัวช้า เลือดไหลไม่หยุดจากแผลหรือออกตามไรฟัน และส่งผลให้ไตวายได้</li>\n"
            << "                <li><strong>งูเขียวหางไหม้:</strong> พบได้บ่อยตามต้นไม้ในบ้านคน พิษทำลายเนื้อเยื่อและระบบเลือด ทำให้บริเวณที่โดนกัดบวมช้ำอย่างรุนแรง</li>\n"
            << "            </ul>\n"
            << "        </section>\n\n"

            // เซกชัน: การปฐมพยาบาล
            << "        <section id=\"firstaid\" class=\"card first-aid\">\n"
            << "            <h2>3. การปฐมพยาบาลเบื้องต้นเมื่อโดนงูกัด</h2>\n"
            << "            <p>การปฐมพยาบาลที่ถูกต้องจะช่วยลดการกระจายของพิษและรักษาชีวิตผู้ป่วยได้:</p>\n"
            << "            <div class=\"warning-box\">❌ ห้ามขันชะเนาะ (ทูนิเกต์) แน่นหนาจนเลือดไม่ไปเลี้ยงอวัยวะ และห้ามใช้ปากดูดพิษเด็ดขาด!</div>\n"
            << "            <ol>\n"
            << "                <li><strong>ตั้งสติ:</strong> ให้ผู้ป่วยเคลื่อนไหวร่างกายให้น้อยที่สุด (โดยเฉพาะอวัยวะที่ถูกกัด) เพื่อชะลอการไหลเวียนของพิษ</li>\n"
            << "                <li><strong>ล้างแผล:</strong> ล้างด้วยน้ำสะอาดหรือน้ำสบู่เบาๆ ห้ามกรีดหรือกรีดแผล</li>\n"
            << "                <li><strong>ดัดแปลงอุปกรณ์ดาม:</strong> ใช้ไม้กระดานหรือผ้าหนาๆ ดามอวัยวะส่วนที่ถูกกัดให้อยู่ในระดับต่ำกว่าหัวใจ</li>\n"
            << "                <li><strong>จดจำลักษณะงู:</strong> ถ่ายภาพงูที่กัดไว้ถ้าทำได้ปลอดภัย เพื่อให้แพทย์จ่ายเซรุ่มแก้พิษตรงกับชนิดงู</li>\n"
            << "                <li><strong>รีบส่งโรงพยาบาล:</strong> พาผู้ป่วยส่งสถานพยาบาลที่ใกล้ที่สุดทันที</li>\n"
            << "            </ol>\n"
            << "        </section>\n\n"

            // เซกชัน: การป้องกันและการรับมือ
            << "        <section id=\"prevention\" class=\"card\">\n"
            << "            <h2>4. การป้องกันและการเอาตัวรอดเมื่อพบเจอ</h2>\n"
            << "            <p>วิธีลดโอกาสที่งูจะเข้าบ้าน และแนวทางปฏิบัติเมื่อประจันหน้ากับงู:</p>\n"
            << "            <ul>\n"
            << "                <li><strong>ทำความสะอาดรอบบ้าน:</strong> อย่าปล่อยให้บ้านรก ตัดหญ้าให้สั้น ทิ้งขยะเศษอาหารเพื่อไม่ให้หนู (ซึ่งเป็นอาหารงู) เข้ามาอาศัย</li>\n"
            << "                <li><strong>อุดช่องทางเข้า:</strong> ตรวจสอบท่อน้ำ ตะแกรง และช่องว่างใต้ประตู ปิดให้มิดชิด</li>\n"
            << "                <li><strong>เมื่อเจอหน้ากัน:</strong> อยู่นิ่งๆ และค่อยๆ ถอยห่างออกมาช้าๆ งูส่วนใหญ่จะไม่โจมตีมนุษย์ก่อนถ้ามันไม่รู้สึกว่าถูกคุกคาม</li>\n"
            << "                <li><strong>ขอความช่วยเหลือ:</strong> หากงูเข้าบ้าน ห้ามพยายามจับเองโดยไม่มีความชำนาญ ให้โทรแจ้งสายด่วน 199 หรือกู้ภัยในพื้นที่</li>\n"
            << "            </ul>\n"
            << "        </section>\n\n"

            << "    </div>\n\n"

            << "    <footer>\n"
            << "        <p>&copy; 2026 เว็บไซต์สาระความรู้เรื่องงู - พัฒนาด้วย C++ HTML Generator</p>\n"
            << "    </footer>\n"
            << "</body>\n"
            << "</html>";

    webFile.close();

    std::cout << "=========================================" << std::endl;
    std::cout << " สร้างเว็บไซต์เรื่องงูเสร็จสมบูรณ์แล้ว! " << std::endl;
    std::cout << " กรุณาเปิดไฟล์ 'snake_website.html' ในบราวเซอร์ของคุณ" << std::endl;
    std::cout << "=========================================" << std::endl;

    return 0;
}