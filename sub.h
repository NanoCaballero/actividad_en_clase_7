
/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

 #ifndef SUB_H
 #define SUB_H
 
 #include "Operacion.h"
 
 class Sub : public Operacion {
 public:
     double ejecutar(int x, int y) override {
         return x - y;
     }
 };
 
 #endif
 