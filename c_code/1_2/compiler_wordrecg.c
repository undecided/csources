/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident169021 Tident169021;
typedef struct Tidobj169015 Tidobj169015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY174333[33];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY174335[257];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj169015  {
  TNimObject Sup;
NI id;
};
struct  Tident169021  {
  Tidobj169015 Sup;
NimStringDesc* s;
Tident169021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_174344)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU16, whichkeyword_174386)(Tident169021* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU16, whichkeyword_174396)(NimStringDesc* id);
N_NIMCALL(Tident169021*, getident_169463)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_174406)(void);
N_NIMCALL(Tident169021*, getident_169473)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_134887)(NimStringDesc* x);
NIM_CONST TY174333 cppnimsharedkeywords_174332 = {
0x10, 0x33, 0xA8, 0x8A, 0x00, 0x00, 0x80, 0x9C,
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00}
;
STRING_LITERAL(TMP1516, "", 0);
STRING_LITERAL(TMP1517, "addr", 4);
STRING_LITERAL(TMP1518, "and", 3);
STRING_LITERAL(TMP1519, "as", 2);
STRING_LITERAL(TMP1520, "asm", 3);
STRING_LITERAL(TMP1521, "atomic", 6);
STRING_LITERAL(TMP1522, "bind", 4);
STRING_LITERAL(TMP1523, "block", 5);
STRING_LITERAL(TMP1524, "break", 5);
STRING_LITERAL(TMP1525, "case", 4);
STRING_LITERAL(TMP1526, "cast", 4);
STRING_LITERAL(TMP1527, "concept", 7);
STRING_LITERAL(TMP1528, "const", 5);
STRING_LITERAL(TMP1529, "continue", 8);
STRING_LITERAL(TMP1530, "converter", 9);
STRING_LITERAL(TMP1531, "defer", 5);
STRING_LITERAL(TMP1532, "discard", 7);
STRING_LITERAL(TMP1533, "distinct", 8);
STRING_LITERAL(TMP1534, "div", 3);
STRING_LITERAL(TMP1535, "do", 2);
STRING_LITERAL(TMP1536, "elif", 4);
STRING_LITERAL(TMP1537, "else", 4);
STRING_LITERAL(TMP1538, "end", 3);
STRING_LITERAL(TMP1539, "enum", 4);
STRING_LITERAL(TMP1540, "except", 6);
STRING_LITERAL(TMP1541, "export", 6);
STRING_LITERAL(TMP1542, "finally", 7);
STRING_LITERAL(TMP1543, "for", 3);
STRING_LITERAL(TMP1544, "from", 4);
STRING_LITERAL(TMP1545, "func", 4);
STRING_LITERAL(TMP1546, "generic", 7);
STRING_LITERAL(TMP1547, "if", 2);
STRING_LITERAL(TMP1548, "import", 6);
STRING_LITERAL(TMP1549, "in", 2);
STRING_LITERAL(TMP1550, "include", 7);
STRING_LITERAL(TMP1551, "interface", 9);
STRING_LITERAL(TMP1552, "is", 2);
STRING_LITERAL(TMP1553, "isnot", 5);
STRING_LITERAL(TMP1554, "iterator", 8);
STRING_LITERAL(TMP1555, "let", 3);
STRING_LITERAL(TMP1556, "macro", 5);
STRING_LITERAL(TMP1557, "method", 6);
STRING_LITERAL(TMP1558, "mixin", 5);
STRING_LITERAL(TMP1559, "mod", 3);
STRING_LITERAL(TMP1560, "nil", 3);
STRING_LITERAL(TMP1561, "not", 3);
STRING_LITERAL(TMP1562, "notin", 5);
STRING_LITERAL(TMP1563, "object", 6);
STRING_LITERAL(TMP1564, "of", 2);
STRING_LITERAL(TMP1565, "or", 2);
STRING_LITERAL(TMP1566, "out", 3);
STRING_LITERAL(TMP1567, "proc", 4);
STRING_LITERAL(TMP1568, "ptr", 3);
STRING_LITERAL(TMP1569, "raise", 5);
STRING_LITERAL(TMP1570, "ref", 3);
STRING_LITERAL(TMP1571, "return", 6);
STRING_LITERAL(TMP1572, "shl", 3);
STRING_LITERAL(TMP1573, "shr", 3);
STRING_LITERAL(TMP1574, "static", 6);
STRING_LITERAL(TMP1575, "template", 8);
STRING_LITERAL(TMP1576, "try", 3);
STRING_LITERAL(TMP1577, "tuple", 5);
STRING_LITERAL(TMP1578, "type", 4);
STRING_LITERAL(TMP1579, "using", 5);
STRING_LITERAL(TMP1580, "var", 3);
STRING_LITERAL(TMP1581, "when", 4);
STRING_LITERAL(TMP1582, "while", 5);
STRING_LITERAL(TMP1583, "with", 4);
STRING_LITERAL(TMP1584, "without", 7);
STRING_LITERAL(TMP1585, "xor", 3);
STRING_LITERAL(TMP1586, "yield", 5);
STRING_LITERAL(TMP1587, ":", 1);
STRING_LITERAL(TMP1588, "::", 2);
STRING_LITERAL(TMP1589, "=", 1);
STRING_LITERAL(TMP1590, ".", 1);
STRING_LITERAL(TMP1591, "..", 2);
STRING_LITERAL(TMP1592, "*", 1);
STRING_LITERAL(TMP1593, "-", 1);
STRING_LITERAL(TMP1594, "magic", 5);
STRING_LITERAL(TMP1595, "thread", 6);
STRING_LITERAL(TMP1596, "final", 5);
STRING_LITERAL(TMP1597, "profiler", 8);
STRING_LITERAL(TMP1598, "objchecks", 9);
STRING_LITERAL(TMP1599, "destroy", 7);
STRING_LITERAL(TMP1600, "immediate", 9);
STRING_LITERAL(TMP1601, "constructor", 11);
STRING_LITERAL(TMP1602, "destructor", 10);
STRING_LITERAL(TMP1603, "delegator", 9);
STRING_LITERAL(TMP1604, "override", 8);
STRING_LITERAL(TMP1605, "importcpp", 9);
STRING_LITERAL(TMP1606, "importobjc", 10);
STRING_LITERAL(TMP1607, "importcompilerproc", 18);
STRING_LITERAL(TMP1608, "importc", 7);
STRING_LITERAL(TMP1609, "exportc", 7);
STRING_LITERAL(TMP1610, "incompletestruct", 16);
STRING_LITERAL(TMP1611, "requiresinit", 12);
STRING_LITERAL(TMP1612, "align", 5);
STRING_LITERAL(TMP1613, "nodecl", 6);
STRING_LITERAL(TMP1614, "pure", 4);
STRING_LITERAL(TMP1615, "sideeffect", 10);
STRING_LITERAL(TMP1616, "header", 6);
STRING_LITERAL(TMP1617, "nosideeffect", 12);
STRING_LITERAL(TMP1618, "gcsafe", 6);
STRING_LITERAL(TMP1619, "noreturn", 8);
STRING_LITERAL(TMP1620, "merge", 5);
STRING_LITERAL(TMP1621, "lib", 3);
STRING_LITERAL(TMP1622, "dynlib", 6);
STRING_LITERAL(TMP1623, "compilerproc", 12);
STRING_LITERAL(TMP1624, "procvar", 7);
STRING_LITERAL(TMP1625, "fatal", 5);
STRING_LITERAL(TMP1626, "error", 5);
STRING_LITERAL(TMP1627, "warning", 7);
STRING_LITERAL(TMP1628, "hint", 4);
STRING_LITERAL(TMP1629, "line", 4);
STRING_LITERAL(TMP1630, "push", 4);
STRING_LITERAL(TMP1631, "pop", 3);
STRING_LITERAL(TMP1632, "define", 6);
STRING_LITERAL(TMP1633, "undef", 5);
STRING_LITERAL(TMP1634, "linedir", 7);
STRING_LITERAL(TMP1635, "stacktrace", 10);
STRING_LITERAL(TMP1636, "linetrace", 9);
STRING_LITERAL(TMP1637, "link", 4);
STRING_LITERAL(TMP1638, "compile", 7);
STRING_LITERAL(TMP1639, "linksys", 7);
STRING_LITERAL(TMP1640, "deprecated", 10);
STRING_LITERAL(TMP1641, "varargs", 7);
STRING_LITERAL(TMP1642, "callconv", 8);
STRING_LITERAL(TMP1643, "breakpoint", 10);
STRING_LITERAL(TMP1644, "debugger", 8);
STRING_LITERAL(TMP1645, "nimcall", 7);
STRING_LITERAL(TMP1646, "stdcall", 7);
STRING_LITERAL(TMP1647, "cdecl", 5);
STRING_LITERAL(TMP1648, "safecall", 8);
STRING_LITERAL(TMP1649, "syscall", 7);
STRING_LITERAL(TMP1650, "inline", 6);
STRING_LITERAL(TMP1651, "noinline", 8);
STRING_LITERAL(TMP1652, "fastcall", 8);
STRING_LITERAL(TMP1653, "closure", 7);
STRING_LITERAL(TMP1654, "noconv", 6);
STRING_LITERAL(TMP1655, "on", 2);
STRING_LITERAL(TMP1656, "off", 3);
STRING_LITERAL(TMP1657, "checks", 6);
STRING_LITERAL(TMP1658, "rangechecks", 11);
STRING_LITERAL(TMP1659, "boundchecks", 11);
STRING_LITERAL(TMP1660, "overflowchecks", 14);
STRING_LITERAL(TMP1661, "nilchecks", 9);
STRING_LITERAL(TMP1662, "floatchecks", 11);
STRING_LITERAL(TMP1663, "nanchecks", 9);
STRING_LITERAL(TMP1664, "infchecks", 9);
STRING_LITERAL(TMP1665, "assertions", 10);
STRING_LITERAL(TMP1666, "patterns", 8);
STRING_LITERAL(TMP1667, "warnings", 8);
STRING_LITERAL(TMP1668, "hints", 5);
STRING_LITERAL(TMP1669, "optimization", 12);
STRING_LITERAL(TMP1670, "raises", 6);
STRING_LITERAL(TMP1671, "writes", 6);
STRING_LITERAL(TMP1672, "reads", 5);
STRING_LITERAL(TMP1673, "size", 4);
STRING_LITERAL(TMP1674, "effects", 7);
STRING_LITERAL(TMP1675, "tags", 4);
STRING_LITERAL(TMP1676, "deadcodeelim", 12);
STRING_LITERAL(TMP1677, "safecode", 8);
STRING_LITERAL(TMP1678, "noforward", 9);
STRING_LITERAL(TMP1679, "pragma", 6);
STRING_LITERAL(TMP1680, "compiletime", 11);
STRING_LITERAL(TMP1681, "noinit", 6);
STRING_LITERAL(TMP1682, "passc", 5);
STRING_LITERAL(TMP1683, "passl", 5);
STRING_LITERAL(TMP1684, "borrow", 6);
STRING_LITERAL(TMP1685, "discardable", 11);
STRING_LITERAL(TMP1686, "fieldchecks", 11);
STRING_LITERAL(TMP1687, "watchpoint", 10);
STRING_LITERAL(TMP1688, "subschar", 8);
STRING_LITERAL(TMP1689, "acyclic", 7);
STRING_LITERAL(TMP1690, "shallow", 7);
STRING_LITERAL(TMP1691, "unroll", 6);
STRING_LITERAL(TMP1692, "linearscanend", 13);
STRING_LITERAL(TMP1693, "computedgoto", 12);
STRING_LITERAL(TMP1694, "injectstmt", 10);
STRING_LITERAL(TMP1695, "experimental", 12);
STRING_LITERAL(TMP1696, "write", 5);
STRING_LITERAL(TMP1697, "gensym", 6);
STRING_LITERAL(TMP1698, "inject", 6);
STRING_LITERAL(TMP1699, "dirty", 5);
STRING_LITERAL(TMP1700, "inheritable", 11);
STRING_LITERAL(TMP1701, "threadvar", 9);
STRING_LITERAL(TMP1702, "emit", 4);
STRING_LITERAL(TMP1703, "asmnostackframe", 15);
STRING_LITERAL(TMP1704, "implicitstatic", 14);
STRING_LITERAL(TMP1705, "global", 6);
STRING_LITERAL(TMP1706, "codegendecl", 11);
STRING_LITERAL(TMP1707, "unchecked", 9);
STRING_LITERAL(TMP1708, "guard", 5);
STRING_LITERAL(TMP1709, "locks", 5);
STRING_LITERAL(TMP1710, "auto", 4);
STRING_LITERAL(TMP1711, "bool", 4);
STRING_LITERAL(TMP1712, "catch", 5);
STRING_LITERAL(TMP1713, "char", 4);
STRING_LITERAL(TMP1714, "class", 5);
STRING_LITERAL(TMP1715, "const_cast", 10);
STRING_LITERAL(TMP1716, "default", 7);
STRING_LITERAL(TMP1717, "delete", 6);
STRING_LITERAL(TMP1718, "double", 6);
STRING_LITERAL(TMP1719, "dynamic_cast", 12);
STRING_LITERAL(TMP1720, "explicit", 8);
STRING_LITERAL(TMP1721, "extern", 6);
STRING_LITERAL(TMP1722, "false", 5);
STRING_LITERAL(TMP1723, "float", 5);
STRING_LITERAL(TMP1724, "friend", 6);
STRING_LITERAL(TMP1725, "goto", 4);
STRING_LITERAL(TMP1726, "int", 3);
STRING_LITERAL(TMP1727, "long", 4);
STRING_LITERAL(TMP1728, "mutable", 7);
STRING_LITERAL(TMP1729, "namespace", 9);
STRING_LITERAL(TMP1730, "new", 3);
STRING_LITERAL(TMP1731, "operator", 8);
STRING_LITERAL(TMP1732, "private", 7);
STRING_LITERAL(TMP1733, "protected", 9);
STRING_LITERAL(TMP1734, "public", 6);
STRING_LITERAL(TMP1735, "register", 8);
STRING_LITERAL(TMP1736, "reinterpret_cast", 16);
STRING_LITERAL(TMP1737, "short", 5);
STRING_LITERAL(TMP1738, "signed", 6);
STRING_LITERAL(TMP1739, "sizeof", 6);
STRING_LITERAL(TMP1740, "static_cast", 11);
STRING_LITERAL(TMP1741, "struct", 6);
STRING_LITERAL(TMP1742, "switch", 6);
STRING_LITERAL(TMP1743, "this", 4);
STRING_LITERAL(TMP1744, "throw", 5);
STRING_LITERAL(TMP1745, "true", 4);
STRING_LITERAL(TMP1746, "typedef", 7);
STRING_LITERAL(TMP1747, "typeid", 6);
STRING_LITERAL(TMP1748, "typename", 8);
STRING_LITERAL(TMP1749, "union", 5);
STRING_LITERAL(TMP1750, "packed", 6);
STRING_LITERAL(TMP1751, "unsigned", 8);
STRING_LITERAL(TMP1752, "virtual", 7);
STRING_LITERAL(TMP1753, "void", 4);
STRING_LITERAL(TMP1754, "volatile", 8);
STRING_LITERAL(TMP1755, "wchar_t", 7);
STRING_LITERAL(TMP1756, "alignas", 7);
STRING_LITERAL(TMP1757, "alignof", 7);
STRING_LITERAL(TMP1758, "constexpr", 9);
STRING_LITERAL(TMP1759, "decltype", 8);
STRING_LITERAL(TMP1760, "nullptr", 7);
STRING_LITERAL(TMP1761, "noexcept", 8);
STRING_LITERAL(TMP1762, "thread_local", 12);
STRING_LITERAL(TMP1763, "static_assert", 13);
STRING_LITERAL(TMP1764, "char16_t", 8);
STRING_LITERAL(TMP1765, "char32_t", 8);
STRING_LITERAL(TMP1766, "stdin", 5);
STRING_LITERAL(TMP1767, "stdout", 6);
STRING_LITERAL(TMP1768, "stderr", 6);
STRING_LITERAL(TMP1769, "inout", 5);
STRING_LITERAL(TMP1770, "bycopy", 6);
STRING_LITERAL(TMP1771, "byref", 5);
STRING_LITERAL(TMP1772, "oneway", 6);
NIM_CONST TY174335 specialwords_174334 = {((NimStringDesc*) &TMP1516),
((NimStringDesc*) &TMP1517),
((NimStringDesc*) &TMP1518),
((NimStringDesc*) &TMP1519),
((NimStringDesc*) &TMP1520),
((NimStringDesc*) &TMP1521),
((NimStringDesc*) &TMP1522),
((NimStringDesc*) &TMP1523),
((NimStringDesc*) &TMP1524),
((NimStringDesc*) &TMP1525),
((NimStringDesc*) &TMP1526),
((NimStringDesc*) &TMP1527),
((NimStringDesc*) &TMP1528),
((NimStringDesc*) &TMP1529),
((NimStringDesc*) &TMP1530),
((NimStringDesc*) &TMP1531),
((NimStringDesc*) &TMP1532),
((NimStringDesc*) &TMP1533),
((NimStringDesc*) &TMP1534),
((NimStringDesc*) &TMP1535),
((NimStringDesc*) &TMP1536),
((NimStringDesc*) &TMP1537),
((NimStringDesc*) &TMP1538),
((NimStringDesc*) &TMP1539),
((NimStringDesc*) &TMP1540),
((NimStringDesc*) &TMP1541),
((NimStringDesc*) &TMP1542),
((NimStringDesc*) &TMP1543),
((NimStringDesc*) &TMP1544),
((NimStringDesc*) &TMP1545),
((NimStringDesc*) &TMP1546),
((NimStringDesc*) &TMP1547),
((NimStringDesc*) &TMP1548),
((NimStringDesc*) &TMP1549),
((NimStringDesc*) &TMP1550),
((NimStringDesc*) &TMP1551),
((NimStringDesc*) &TMP1552),
((NimStringDesc*) &TMP1553),
((NimStringDesc*) &TMP1554),
((NimStringDesc*) &TMP1555),
((NimStringDesc*) &TMP1556),
((NimStringDesc*) &TMP1557),
((NimStringDesc*) &TMP1558),
((NimStringDesc*) &TMP1559),
((NimStringDesc*) &TMP1560),
((NimStringDesc*) &TMP1561),
((NimStringDesc*) &TMP1562),
((NimStringDesc*) &TMP1563),
((NimStringDesc*) &TMP1564),
((NimStringDesc*) &TMP1565),
((NimStringDesc*) &TMP1566),
((NimStringDesc*) &TMP1567),
((NimStringDesc*) &TMP1568),
((NimStringDesc*) &TMP1569),
((NimStringDesc*) &TMP1570),
((NimStringDesc*) &TMP1571),
((NimStringDesc*) &TMP1572),
((NimStringDesc*) &TMP1573),
((NimStringDesc*) &TMP1574),
((NimStringDesc*) &TMP1575),
((NimStringDesc*) &TMP1576),
((NimStringDesc*) &TMP1577),
((NimStringDesc*) &TMP1578),
((NimStringDesc*) &TMP1579),
((NimStringDesc*) &TMP1580),
((NimStringDesc*) &TMP1581),
((NimStringDesc*) &TMP1582),
((NimStringDesc*) &TMP1583),
((NimStringDesc*) &TMP1584),
((NimStringDesc*) &TMP1585),
((NimStringDesc*) &TMP1586),
((NimStringDesc*) &TMP1587),
((NimStringDesc*) &TMP1588),
((NimStringDesc*) &TMP1589),
((NimStringDesc*) &TMP1590),
((NimStringDesc*) &TMP1591),
((NimStringDesc*) &TMP1592),
((NimStringDesc*) &TMP1593),
((NimStringDesc*) &TMP1594),
((NimStringDesc*) &TMP1595),
((NimStringDesc*) &TMP1596),
((NimStringDesc*) &TMP1597),
((NimStringDesc*) &TMP1598),
((NimStringDesc*) &TMP1599),
((NimStringDesc*) &TMP1600),
((NimStringDesc*) &TMP1601),
((NimStringDesc*) &TMP1602),
((NimStringDesc*) &TMP1603),
((NimStringDesc*) &TMP1604),
((NimStringDesc*) &TMP1605),
((NimStringDesc*) &TMP1606),
((NimStringDesc*) &TMP1607),
((NimStringDesc*) &TMP1608),
((NimStringDesc*) &TMP1609),
((NimStringDesc*) &TMP1610),
((NimStringDesc*) &TMP1611),
((NimStringDesc*) &TMP1612),
((NimStringDesc*) &TMP1613),
((NimStringDesc*) &TMP1614),
((NimStringDesc*) &TMP1615),
((NimStringDesc*) &TMP1616),
((NimStringDesc*) &TMP1617),
((NimStringDesc*) &TMP1618),
((NimStringDesc*) &TMP1619),
((NimStringDesc*) &TMP1620),
((NimStringDesc*) &TMP1621),
((NimStringDesc*) &TMP1622),
((NimStringDesc*) &TMP1623),
((NimStringDesc*) &TMP1624),
((NimStringDesc*) &TMP1625),
((NimStringDesc*) &TMP1626),
((NimStringDesc*) &TMP1627),
((NimStringDesc*) &TMP1628),
((NimStringDesc*) &TMP1629),
((NimStringDesc*) &TMP1630),
((NimStringDesc*) &TMP1631),
((NimStringDesc*) &TMP1632),
((NimStringDesc*) &TMP1633),
((NimStringDesc*) &TMP1634),
((NimStringDesc*) &TMP1635),
((NimStringDesc*) &TMP1636),
((NimStringDesc*) &TMP1637),
((NimStringDesc*) &TMP1638),
((NimStringDesc*) &TMP1639),
((NimStringDesc*) &TMP1640),
((NimStringDesc*) &TMP1641),
((NimStringDesc*) &TMP1642),
((NimStringDesc*) &TMP1643),
((NimStringDesc*) &TMP1644),
((NimStringDesc*) &TMP1645),
((NimStringDesc*) &TMP1646),
((NimStringDesc*) &TMP1647),
((NimStringDesc*) &TMP1648),
((NimStringDesc*) &TMP1649),
((NimStringDesc*) &TMP1650),
((NimStringDesc*) &TMP1651),
((NimStringDesc*) &TMP1652),
((NimStringDesc*) &TMP1653),
((NimStringDesc*) &TMP1654),
((NimStringDesc*) &TMP1655),
((NimStringDesc*) &TMP1656),
((NimStringDesc*) &TMP1657),
((NimStringDesc*) &TMP1658),
((NimStringDesc*) &TMP1659),
((NimStringDesc*) &TMP1660),
((NimStringDesc*) &TMP1661),
((NimStringDesc*) &TMP1662),
((NimStringDesc*) &TMP1663),
((NimStringDesc*) &TMP1664),
((NimStringDesc*) &TMP1665),
((NimStringDesc*) &TMP1666),
((NimStringDesc*) &TMP1667),
((NimStringDesc*) &TMP1668),
((NimStringDesc*) &TMP1669),
((NimStringDesc*) &TMP1670),
((NimStringDesc*) &TMP1671),
((NimStringDesc*) &TMP1672),
((NimStringDesc*) &TMP1673),
((NimStringDesc*) &TMP1674),
((NimStringDesc*) &TMP1675),
((NimStringDesc*) &TMP1676),
((NimStringDesc*) &TMP1677),
((NimStringDesc*) &TMP1678),
((NimStringDesc*) &TMP1679),
((NimStringDesc*) &TMP1680),
((NimStringDesc*) &TMP1681),
((NimStringDesc*) &TMP1682),
((NimStringDesc*) &TMP1683),
((NimStringDesc*) &TMP1684),
((NimStringDesc*) &TMP1685),
((NimStringDesc*) &TMP1686),
((NimStringDesc*) &TMP1687),
((NimStringDesc*) &TMP1688),
((NimStringDesc*) &TMP1689),
((NimStringDesc*) &TMP1690),
((NimStringDesc*) &TMP1691),
((NimStringDesc*) &TMP1692),
((NimStringDesc*) &TMP1693),
((NimStringDesc*) &TMP1694),
((NimStringDesc*) &TMP1695),
((NimStringDesc*) &TMP1696),
((NimStringDesc*) &TMP1697),
((NimStringDesc*) &TMP1698),
((NimStringDesc*) &TMP1699),
((NimStringDesc*) &TMP1700),
((NimStringDesc*) &TMP1701),
((NimStringDesc*) &TMP1702),
((NimStringDesc*) &TMP1703),
((NimStringDesc*) &TMP1704),
((NimStringDesc*) &TMP1705),
((NimStringDesc*) &TMP1706),
((NimStringDesc*) &TMP1707),
((NimStringDesc*) &TMP1708),
((NimStringDesc*) &TMP1709),
((NimStringDesc*) &TMP1710),
((NimStringDesc*) &TMP1711),
((NimStringDesc*) &TMP1712),
((NimStringDesc*) &TMP1713),
((NimStringDesc*) &TMP1714),
((NimStringDesc*) &TMP1715),
((NimStringDesc*) &TMP1716),
((NimStringDesc*) &TMP1717),
((NimStringDesc*) &TMP1718),
((NimStringDesc*) &TMP1719),
((NimStringDesc*) &TMP1720),
((NimStringDesc*) &TMP1721),
((NimStringDesc*) &TMP1722),
((NimStringDesc*) &TMP1723),
((NimStringDesc*) &TMP1724),
((NimStringDesc*) &TMP1725),
((NimStringDesc*) &TMP1726),
((NimStringDesc*) &TMP1727),
((NimStringDesc*) &TMP1728),
((NimStringDesc*) &TMP1729),
((NimStringDesc*) &TMP1730),
((NimStringDesc*) &TMP1731),
((NimStringDesc*) &TMP1732),
((NimStringDesc*) &TMP1733),
((NimStringDesc*) &TMP1734),
((NimStringDesc*) &TMP1735),
((NimStringDesc*) &TMP1736),
((NimStringDesc*) &TMP1737),
((NimStringDesc*) &TMP1738),
((NimStringDesc*) &TMP1739),
((NimStringDesc*) &TMP1740),
((NimStringDesc*) &TMP1741),
((NimStringDesc*) &TMP1742),
((NimStringDesc*) &TMP1743),
((NimStringDesc*) &TMP1744),
((NimStringDesc*) &TMP1745),
((NimStringDesc*) &TMP1746),
((NimStringDesc*) &TMP1747),
((NimStringDesc*) &TMP1748),
((NimStringDesc*) &TMP1749),
((NimStringDesc*) &TMP1750),
((NimStringDesc*) &TMP1751),
((NimStringDesc*) &TMP1752),
((NimStringDesc*) &TMP1753),
((NimStringDesc*) &TMP1754),
((NimStringDesc*) &TMP1755),
((NimStringDesc*) &TMP1756),
((NimStringDesc*) &TMP1757),
((NimStringDesc*) &TMP1758),
((NimStringDesc*) &TMP1759),
((NimStringDesc*) &TMP1760),
((NimStringDesc*) &TMP1761),
((NimStringDesc*) &TMP1762),
((NimStringDesc*) &TMP1763),
((NimStringDesc*) &TMP1764),
((NimStringDesc*) &TMP1765),
((NimStringDesc*) &TMP1766),
((NimStringDesc*) &TMP1767),
((NimStringDesc*) &TMP1768),
((NimStringDesc*) &TMP1769),
((NimStringDesc*) &TMP1770),
((NimStringDesc*) &TMP1771),
((NimStringDesc*) &TMP1772)}
;
extern TFrame* frameptr_17042;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_17042 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_17042).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_17042;
	frameptr_17042 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_20001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_17042 = (*frameptr_17042).prev;
}

N_NIMCALL(NI, findstr_174344)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	nimfr("findStr", "wordrecg.nim")
{	result = 0;
	{
		NI i_174362;
		NI HEX3Atmp_174364;
		NI res_174367;
		i_174362 = 0;
		HEX3Atmp_174364 = 0;
		nimln(173, "wordrecg.nim");
		HEX3Atmp_174364 = (aLen0-1);
		nimln(1598, "system.nim");
		res_174367 = ((NI) 0);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI TMP1773;
				if (!(res_174367 <= HEX3Atmp_174364)) goto LA3;
				nimln(1600, "system.nim");
				i_174362 = res_174367;
				nimln(174, "wordrecg.nim");
				{
					NI LOC6;
					if ((NU)(i_174362) >= (NU)(aLen0)) raiseIndexError();
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_174362], s);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					nimln(175, "wordrecg.nim");
					result = i_174362;
					goto BeforeRet;
				}
				LA7: ;
				nimln(1614, "system.nim");
				TMP1773 = addInt(res_174367, ((NI) 1));
				res_174367 = (NI)(TMP1773);
			} LA3: ;
		}
	}
	nimln(176, "wordrecg.nim");
	result = ((NI) -1);
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, whichkeyword_174386)(Tident169021* id) {
	NU16 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(179, "wordrecg.nim");
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3;
		result = ((NU16) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(180, "wordrecg.nim");
		result = ((NU16)chckRange((*id).Sup.id, ((NU16) 0), ((NU16) 256)));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU16, whichkeyword_174396)(NimStringDesc* id) {
	NU16 result;
	Tident169021* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(183, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_169463(id);
	result = whichkeyword_174386(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, initspecials_174406)(void) {
	nimfr("initSpecials", "wordrecg.nim")
	{
		NU16 s_174623;
		NI res_174635;
		s_174623 = 0;
		nimln(1598, "system.nim");
		res_174635 = ((NI) 1);
		{
			nimln(1599, "system.nim");
			while (1) {
				NI LOC4;
				Tident169021* LOC5;
				NI TMP1774;
				if (!(res_174635 <= ((NI) 256))) goto LA3;
				nimln(1600, "system.nim");
				s_174623 = ((NU16)chckRange(res_174635, ((NU16) 0), ((NU16) 256)));
				nimln(188, "wordrecg.nim");
				LOC4 = 0;
				LOC4 = hashignorestyle_134887(specialwords_174334[(s_174623)- 0]);
				LOC5 = 0;
				LOC5 = getident_169473(specialwords_174334[(s_174623)- 0], LOC4);
				(*LOC5).Sup.id = ((NI) (s_174623));
				nimln(1614, "system.nim");
				TMP1774 = addInt(res_174635, ((NI) 1));
				res_174635 = (NI)(TMP1774);
			} LA3: ;
		}
	}
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(190, "wordrecg.nim");
	initspecials_174406();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit)(void) {
}

