/*****************************************************************************
 *
 * File:    Fwknop.java
 *
 * Author:  Max Kastanas <max2idea@users.sourceforge.net>
 *
 * Purpose: Simple wrapper for Android logging
 *
 *  License (GNU Public License):
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *     USA
 *
 *****************************************************************************
 */
#ifndef _LOGUTILS_H
#define	_LOGUTILS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <android/log.h>
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, "libfwknop",__VA_ARGS__)

#ifdef	__cplusplus
}
#endif

#endif	/* _LOGUTILS_H */

