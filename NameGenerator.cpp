﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char familyname[][7] = {
"赵", "钱", "孙", "李", "周", "吴", "郑", "王", "冯", "陈", "褚", "卫", "蒋", "沈", "韩", "杨",
"朱", "秦", "尤", "许", "何", "吕", "施", "张", "孔", "曹", "严", "华", "金", "魏", "陶", "姜",
"戚", "谢", "邹", "喻", "柏", "水", "窦", "章", "云", "苏", "潘", "葛", "奚", "范", "彭", "郎",
"鲁", "韦", "昌", "马", "苗", "凤", "花", "方", "俞", "任", "袁", "柳", "鲍", "史", "唐",
"费", "岑", "薛", "雷", "贺", "汤", "滕", "殷", "罗", "毕", "郝", "邬", "安", "常",
"乐", "于", "时", "傅", "皮", "卞", "齐", "康", "伍", "余", "元", "卜", "顾", "孟", "平", "黄",
"和", "穆", "萧", "尹", "姚", "邵", "湛", "汪", "祁", "毛", "禹", "狄", "贝", "明", "",
"计", "伏", "成", "戴", "谈", "宋", "茅", "庞", "熊", "纪", "舒", "屈", "项", "祝", "董", "梁",
"杜", "阮", "蓝", "闵", "席", "季", "麻", "强", "贾", "路", "娄", "江", "童", "颜", "郭",
"梅", "盛", "林", "刁", "钟", "徐", "邱", "骆", "高", "夏", "蔡", "田", "樊", "胡", "凌", "霍",
"虞", "万", "支", "柯", "管", "卢", "莫", "经", "房", "裘", "缪", "干", "解", "应", "宗",
"丁", "宣", "邓", "单", "杭", "洪", "包", "诸", "左", "石", "崔", "吉", "龚",
"程", "邢", "裴", "陆", "荣", "翁", "荀", "羊", "惠", "甄", "曲", "家", "封",
"段", "富", "巫", "乌", "焦", "巴", "弓",
"牧", "山", "谷", "车", "侯", "全", "班", "仰", "秋", "仲", "伊", "宫",
"宁", "仇", "甘", "厉", "祖", "武", "符", "刘", "景", "詹", "束", "龙",
"叶", "幸", "司", "韶", "黎", "薄", "印", "宿", "白", "怀", "蒲", "台", "丛", "鄂",
"索", "咸", "赖", "卓", "蔺", "屠", "蒙", "池", "乔", "阴", "郁", "胥", "能", "苍", "双",
"闻", "莘", "党", "翟", "谭", "贡", "劳", "逄", "姬", "申", "扶", "堵", "冉", "宰", "郦", "雍",
"却", "璩", "桑", "桂", "濮", "牛", "寿", "通", "边", "扈", "燕", "冀", "郏", "浦", "尚", "农",
"温", "别", "庄", "晏", "柴", "瞿", "阎", "充", "慕", "连", "茹", "习", "宦", "艾", "鱼", "容",
"向", "古", "易", "慎", "戈", "廖", "庚", "终", "暨", "居", "衡", "步", "都", "耿", "满", "弘",
"匡", "国", "文", "寇", "广", "禄", "阙", "东", "殴", "殳", "沃", "利", "蔚", "越", "夔", "隆",
"师", "巩", "厍", "聂", "晁", "勾", "敖", "融", "冷", "訾", "辛", "阚", "那", "简", "饶", "空",
"曾", "毋", "沙", "乜", "养", "鞠", "须", "丰", "巢", "关", "蒯", "相", "查", "后", "荆", "红",

"游", "桓", "公", "万俟", "司马", "上官", "欧阳",
"夏侯", "诸葛", "闻人", "东方", "赫连", "皇甫", "尉迟", "公羊",
"太叔", "申屠",
"公孙", "仲孙", "轩辕", "令狐", "钟离", "宇文", "长孙", "慕容",
"闾丘", "司徒", "司空", "司寇", "督", "子车",
"端木",
};

const char nameword[][4] = {
"劲", "舟", "然", "灼", "胄", "肯", "换", "恒", "封", "腾", "贯", "铿", "柱", "琰", "充", "述", "危", "驳", "三", "待", "界", "虎", "淮", "摇", "表", "粟", "沐", "楙", "劝", "丛", "频", "缓", "瓢", "州", "涪", "草", "牧", "脉", "悠", "户", "逊", "峥", "禧", "谱", "匡", "笔", "珂", "图", "佛", "玄", "炼", "纹", "舱", "灶", "淦", "煌", "细", "弄", "官", "荔", "搏", "浪", "渊", "本", "珪", "圭", "栋", "邀", "燃", "献", "豆", "有", "侨", "阐", "缘", "泳", "岸", "穗", "固", "翼", "醒", "棉", "昧", "令", "叙", "毖", "羡", "凉", "嶷", "习", "丘", "御", "丞", "轮", "俯", "紊", "涣", "务", "材", "璨", "印", "郎", "放", "守", "澄", "越", "质", "愚", "帜", "共", "朋", "谡", "壮", "辨", "延", "驹", "起", "鼎", "稚", "赫", "夕", "牡", "茗", "沫", "仔", "鲜", "熹", "显", "魁", "棋", "序", "虔", "练", "奉", "琅", "存", "镜", "灏", "昕", "谆", "票", "苍", "仓", "桥", "峦", "伙", "隐", "僚", "帮", "涌", "藏", "准", "锐", "鸣", "扁", "亮", "尝", "銮", "焱", "僖", "泛", "翘", "滔", "篱", "皆", "骞", "逞", "同", "混", "珐", "拓", "畅", "胥", "俭", "般", "凛", "皑", "堂", "朴", "斗", "昼", "努", "功", "望", "河", "替", "湃", "等", "蔼", "传", "先", "震", "辅", "逢", "彧", "钊", "量", "才", "琢", "晞", "稠", "备", "诺", "鹊", "操", "弈", "跃", "深", "埂", "聚", "配", "竞", "键", "侠", "愈", "皋", "盖", "众", "前", "燊", "蔓", "樵", "敦", "沧", "铎", "示", "窍", "席", "竟", "宙", "薄", "璀", "勋", "知", "睦", "瑰", "农", "沪", "佟", "笙", "熙", "研", "跋", "庚", "赣", "哥", "更", "灿", "想", "臣", "邦", "炳", "巾", "禄", "览", "互", "榕", "赋", "辩", "征", "颂", "峪", "翱", "漳", "录", "责", "壁", "匀", "冶", "办", "莘", "相", "恋", "焕", "朗", "宾", "满", "纪", "时", "赟", "畏", "晗", "稼", "里", "卡", "熠", "快", "久", "菊", "艇", "虬", "杉", "尉", "厉", "仟", "诣", "暖", "闰", "标", "汝", "管", "斜", "祎", "勉", "姬", "钗", "娅", "垠", "姓", "啸", "姝", "赞", "苾", "衎", "照", "栩", "槿", "汐", "城", "唯", "隽", "煜", "汇", "蓓", "蔚", "钫", "霁", "倍", "劳", "约", "鑫", "勤", "嫩", "荪", "策", "通", "仇", "增", "钿", "棵", "朦", "徒", "滨", "涨", "珺", "炯", "嬿", "滢", "潇", "链", "樑", "察", "楼", "荟", "锡", "炀", "革", "磊", "曦", "潭", "桢", "淼", "付", "怿", "爽", "校", "兔", "续", "杏", "拉", "太", "热", "汗", "卜", "京", "单", "芊", "润", "奎", "婵", "纲", "洲", "多", "引", "冀", "萌", "郝", "忱", "居", "愿", "衍", "能", "开", "鹏", "骁", "恬", "运", "裘", "会", "珩", "霄", "钢", "狄", "溢", "励", "帅", "鸯", "烨", "甜", "楠", "道", "洋", "晔", "炜", "航", "烜", "樊", "帼", "环", "浓", "沃", "黛", "靓", "鸳", "娴", "科", "婧", "琤", "鲍", "绒", "玺", "桑", "羚", "嫄", "碟", "典", "斯", "钦", "剑", "铁", "燚", "委", "锋", "晶", "囡", "咪", "莓", "肖", "俏", "尤", "玥", "楚", "翀", "司", "加", "侃", "婕", "沁", "攀", "戚", "分", "蕲", "媚", "炎", "泽", "玎", "升", "泱", "郏", "节", "迦", "密", "璐", "寅", "晖", "殷", "西", "笛", "澍", "霏", "赛", "妍", "招", "寿", "应", "澜", "姗", "莎", "萃", "潮", "姣", "晨", "女", "於", "圆", "薏", "舞", "忻", "斐", "铮", "姮", "浣", "苗", "抒", "央", "函", "赏", "园", "贾", "烈", "钶", "驰", "孔", "鹰", "迪", "琛", "红", "悦", "邹", "纳", "锦", "株", "艺", "漪", "卓", "宓", "祝", "秧", "瑛", "妮", "董", "树", "联", "严", "优", "艳", "缪", "聪", "楷", "胤", "鸥", "森", "厅", "兵", "涛", "屠", "彪", "虞", "捷", "乘", "蕴", "音", "仙", "沈", "邸", "挺", "娜", "银", "川", "轲", "干", "占", "彩", "微", "津", "漂", "瑾", "贇", "禇", "储", "臧", "铃", "褚", "沙", "雷", "查", "秦", "戎", "荆", "龚", "诸", "弓", "田", "陶", "展", "祖", "包", "别", "曲", "广", "谈", "刁", "阚", "冉", "蒙", "锺", "嵇", "项", "章", "卫", "郦", "贝", "饶", "申", "邵", "池", "廉", "溥", "莫", "符", "咏", "薛", "房", "介", "翟", "古", "柴", "羊", "鞠", "聂", "巩", "翊", "焦", "远", "彬", "卞", "阿", "肇", "奚", "支", "崇", "敖", "葛", "晏", "贲", "甘", "登", "百", "暴", "毕", "寇", "与", "妹", "路", "闵", "陆", "石", "善", "庄", "益", "乃", "关", "屈", "谚", "宥", "游", "苹", "艾", "昝", "娄", "顾", "尹", "欧", "阙", "伊", "霞", "瑄", "福", "予", "贵", "超", "伏", "晋", "璋", "蒋", "杭", "宝", "裴", "光", "权", "夙", "妃", "呈", "尚", "右", "喻", "镇", "昭", "吟", "治", "素", "庾", "雄", "俞", "伍", "井", "毛", "台", "范", "士", "大", "永", "利", "巫", "舜", "茅", "曜", "少", "莉", "秉", "岑", "金", "谦", "娇", "鄂", "亭", "孜", "马", "竣", "鲁", "盛", "武", "傅", "柯", "隆", "和", "祐", "瞿", "幸", "麟", "盈", "洁", "行", "颜", "经", "旭", "舒", "庭", "必", "媛", "牛", "熊", "阮", "羽", "纶", "璩", "方", "健", "姵", "敏", "米", "清", "余", "一", "敬", "承", "彰", "芸", "重", "昇", "魏", "火", "滕", "左", "段", "绍", "勳", "谕", "桂", "巴", "裕", "懿", "纯", "子", "龙", "兴", "合", "詹", "边", "庆", "礼", "臻", "劭", "淳", "江", "史", "常", "致", "景", "爱", "扬", "穆", "昀", "浩", "上", "坤", "苏", "廖", "于", "宪", "源", "泰", "恭", "孝", "崔", "唐", "义", "旻", "丰", "连", "弘", "品", "仲", "兆", "骏", "花", "琼", "名", "霖", "施", "郁", "卢", "丁", "其", "汪", "甯", "叶", "逸", "琇", "吉", "芬", "燕", "胜", "允", "法", "世", "钰", "纬", "峰", "亚", "奇", "民", "简", "泓", "菁", "倪", "彭", "孙", "沉", "万", "佑", "芝", "琳", "群", "强", "廷", "高", "昆", "宗", "颖", "博", "蓁", "原", "丽", "铭", "珮", "甄", "翰", "解", "黎", "朝", "睿", "人", "汉", "孟", "全", "任", "枝", "姜", "玟", "恩", "扈", "得", "星", "桦", "圣", "泉", "仕", "勇", "妤", "德", "娟", "木", "进", "克", "何", "欢", "罗", "钮", "培", "皇", "甫", "季", "乔", "凯", "财", "姚", "馨", "良", "振", "力", "达", "昱", "玮", "喜", "杨", "康", "茜", "湘", "立", "男", "莹", "惟", "协", "宋", "忠", "奕", "芳", "发", "汤", "邓", "伟", "威", "生", "祥", "萧", "毓", "毅", "韩", "成", "竺", "添", "徐", "宇", "翔", "郭", "国", "荣", "意", "长", "伦", "军", "峻", "伯", "维", "温", "钧", "旺", "筱", "育", "宁", "俊", "宜", "仁", "诚", "皓", "佩", "琦", "骆", "秀", "齐", "曹", "筑", "坚", "鸿", "韦", "娥", "程", "定", "欣", "翁", "袁", "韵", "东", "周", "杜", "贤", "卿", "淑", "嘉", "侑", "涂", "玫", "贞", "岳", "赵", "侯", "月", "姿", "胡", "冠", "儒", "英", "杰", "梁", "凤", "珠", "仪", "学", "婉", "启", "洪", "明", "正", "彦", "璇", "童", "祯", "茂", "辉", "轩", "昌", "政", "智", "朱", "信", "顺", "赖", "刚", "吕", "均", "潘", "慧", "希", "钟", "冯", "帆", "黄", "耀", "邬", "建", "中", "钱", "家", "华", "刘", "谢", "可", "雯", "辰", "琬", "婷", "湖", "瑜", "吴", "惠", "茹", "辛", "豪", "李", "来", "邱", "慈", "倩", "林", "瑞", "尧", "庞", "富", "宣", "哲", "许", "张", "志", "陈", "宏", "俐", "伶", "蔡", "修", "郑", "佳", "玲", "心", "怡", "王", "虹", "斌", "戴", "美", "君", "曾", "蕙", "琪", "笑", "映", "访", "平", "薇", "孤", "水", "妙", "小", "思", "蕾", "槐", "儿", "靖", "烟", "筠", "蕊", "书", "幻", "又", "菡", "亦", "醉", "寻", "芹", "绿", "诗", "宛", "竹", "彤", "听", "菲", "谷", "新", "友", "雨", "蝶", "依", "莲", "元", "幼", "尔", "阳", "沛", "萍", "瑶", "向", "采", "觅", "桃", "卉", "迎", "乐", "松", "山", "含", "涵", "蓝", "晓", "曼", "冬", "忆", "静", "芙", "绮", "兰", "安", "丝", "千", "珍", "香", "萱", "冷", "雁", "飞", "天", "琴", "真", "秋", "荷", "珊", "柏", "容", "如", "紫", "易", "冰", "凡", "碧", "玉", "岚", "语", "风", "丹", "痴", "旋", "雪", "枫", "傲", "云", "白", "梅", "念", "露", "慕", "凝", "雅", "盼", "柳", "半", "青", "从", "霜", "怀", "柔", "怜", "夜", "蓉", "代", "双", "以", "若", "菱", "芷", "文", "寄", "南", "晴", "恨", "之", "梦", "寒", "初", "翠", "灵", "波", "巧", "问", "夏", "凌", "春", "惜", "海", "空",
};

int main()
{
    int num;
    int n;
    char filename[261];
    srand(time(0) + num + n);
    
    puts("Want to save in file? (You can type the filename to save the names list, or no word to use console output)");
    gets(filename);
    puts("How much names do you want? (You can type 0 to genarate names untill equal the specified name)");
    scanf("%d", &num);
    if (num == 0)
    {
        char tname[16];
        gets(filename);
        puts("What's the name that you want?");
        gets(filename);
        num = 0;
        while (true)
        {
            n = rand() % 3 + 1;
            strcpy(tname, familyname[rand() % sizeof(familyname) / sizeof(familyname[0])]);
            while (n-- > 0)
                strcat(tname, nameword[rand() % sizeof(nameword) / sizeof(nameword[0])]);
            printf("\r第%d次生成:%s...", ++num, tname);
            if (strcmp(tname, filename) == 0)
            {
                printf("\n终于生成了%s，是本次随机生成的第%i个名字\n", tname, num);
                break;
            }
        }
        
        system("pause");
    }
    else
    {
    if (strlen(filename) > 0)
        freopen(filename, "wb", stdout);
    while (num-- > 0)
    {
        n = rand() % 3 + 1;
        printf("%s", familyname[rand() % sizeof(familyname) / sizeof(familyname[0])]);
        while (n-- > 0)
            printf("%s", nameword[rand() % sizeof(nameword) / sizeof(nameword[0])]);
        puts("");
    }
    if (strlen(filename) == 0)
        system("pause");
    }
}