# List of licenses

This lists the licenses of additional software that is required to build the RSU Connector and that is not already supplied from for OpenWRT.

## WRITTEN OFFER

```
This product may contain software under a license granting you the right to obtain the source code for such software from the entity (person or organisation) that has distributed this product to you. Such licenses include but are not limited to the GNU General Public License (GPL), the GNU Lesser General Public License (LGPL), the Mozilla Public License (MPL).

In case you have not received the complete and corresponding source code for such software alongside the distribution you or any third party are hereby offered a complete machine-readable copy of the corresponding source for such software contained in this product at a charge no more than the cost of physically performing source distribution.

This offer is valid for three years after this product has been distributed to you.

In order to accept this offer, please send a request (via e-mail, postal mail or fax) stating

(1)    The name and identification code of the product

(2)    The firmware or software version number, as applicable

(3)    Your name

(4)    Your company name (if applicable)

(5)    Your email address (if applicable)

(6)    Your address to which you wish the software to be delivered.

Notwithstanding the above offer, you may also obtain the source code under the terms of the offer described above by addressing your request

to the postal address that is available in the product documentation, or
to
    Bosch Sicherheitssysteme GmbH
    Open Source Officer
    Robert-Bosch-Ring 5 und 7
    85630 Grasbrunn
    Germany
For your convenience, you may also find the source code at https://www.boschsecurity.com/oss
```

## rapidjson

```
Tencent is pleased to support the open source community by making RapidJSON available.

Copyright (C) 2015 THL A29 Limited, a Tencent company, and Milo Yip.  All rights reserved.

If you have downloaded a copy of the RapidJSON binary from Tencent, please note that the RapidJSON binary is licensed under the MIT License.
If you have downloaded a copy of the RapidJSON source code from Tencent, please note that RapidJSON source code is licensed under the MIT License, except for the third-party components listed below which are subject to different license terms.  Your integration of RapidJSON into your own projects may require compliance with the MIT License, as well as the other licenses applicable to the third-party components included within RapidJSON. To avoid the problematic JSON license in your own projects, it's sufficient to exclude the bin/jsonchecker/ directory, as it's the only code under the JSON license.
A copy of the MIT License is included in this file.

Other dependencies and licenses:

Open Source Software Licensed Under the BSD License:
--------------------------------------------------------------------

The msinttypes r29
Copyright (c) 2006-2013 Alexander Chemeris
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
* Neither the name of  copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS AND CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Open Source Software Licensed Under the JSON License:
--------------------------------------------------------------------

json.org
Copyright (c) 2002 JSON.org
All Rights Reserved.

JSON_checker
Copyright (c) 2002 JSON.org
All Rights Reserved.


Terms of the JSON License:
---------------------------------------------------

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

The Software shall be used for Good, not Evil.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


Terms of the MIT License:
--------------------------------------------------------------------

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```

The RSU Connector does not make use of files licensed under the JSON License.

## spdlog

```
The MIT License (MIT)

Copyright (c) 2016 Gabi Melman.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

-- NOTE: Third party dependency used by this software --
This software depends on the fmt lib (MIT License),
and users must comply to its license: https://github.com/fmtlib/fmt/blob/master/LICENSE.rst
```

The source code contains the following Copyright statements:
```
Copyright(c) 2015-present, Gabi Melman & spdlog contributors
Copyright(c) 2019 ZVYAGIN.Alexander@gmail.com
Copyright(c) 2016 Alexander Dalshov
Copyright(c) 2016 Gabi Melman
Copyright(c) 2016-2018 Gabi Melman
Copyright(c) 2019 spdlog authors
```


## fmt

fmt is supplied by OpenWRT, but the OpenWRT supplied version is older, so the information for the updated package is included here.

```
Copyright (c) 2012 - present, Victor Zverovich

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

--- Optional exception to the license ---

As an exception, if, as a result of your compiling your source code, portions
of this Software are embedded into a machine-executable object form of such
source code, you may redistribute such embedded portions in such object form
without including the above copyright and permission notices.
```

libfmt also contains a derived work in include/fmt/chrono.h:
```
// This is a stripped down version of duration_cast, for inclusion in fmt.
// See https://github.com/pauldreik/safe_duration_cast
//
// Copyright Paul Dreik 2019
```

The link shows the original work to be dual licensed under Boost 1.0 and GPL.
The Boost 1.0 License:

```
Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
```

## oatpp

```
                                 Apache License
                           Version 2.0, January 2004
                        http://www.apache.org/licenses/

   TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION

   1. Definitions.

      "License" shall mean the terms and conditions for use, reproduction,
      and distribution as defined by Sections 1 through 9 of this document.

      "Licensor" shall mean the copyright owner or entity authorized by
      the copyright owner that is granting the License.

      "Legal Entity" shall mean the union of the acting entity and all
      other entities that control, are controlled by, or are under common
      control with that entity. For the purposes of this definition,
      "control" means (i) the power, direct or indirect, to cause the
      direction or management of such entity, whether by contract or
      otherwise, or (ii) ownership of fifty percent (50%) or more of the
      outstanding shares, or (iii) beneficial ownership of such entity.

      "You" (or "Your") shall mean an individual or Legal Entity
      exercising permissions granted by this License.

      "Source" form shall mean the preferred form for making modifications,
      including but not limited to software source code, documentation
      source, and configuration files.

      "Object" form shall mean any form resulting from mechanical
      transformation or translation of a Source form, including but
      not limited to compiled object code, generated documentation,
      and conversions to other media types.

      "Work" shall mean the work of authorship, whether in Source or
      Object form, made available under the License, as indicated by a
      copyright notice that is included in or attached to the work
      (an example is provided in the Appendix below).

      "Derivative Works" shall mean any work, whether in Source or Object
      form, that is based on (or derived from) the Work and for which the
      editorial revisions, annotations, elaborations, or other modifications
      represent, as a whole, an original work of authorship. For the purposes
      of this License, Derivative Works shall not include works that remain
      separable from, or merely link (or bind by name) to the interfaces of,
      the Work and Derivative Works thereof.

      "Contribution" shall mean any work of authorship, including
      the original version of the Work and any modifications or additions
      to that Work or Derivative Works thereof, that is intentionally
      submitted to Licensor for inclusion in the Work by the copyright owner
      or by an individual or Legal Entity authorized to submit on behalf of
      the copyright owner. For the purposes of this definition, "submitted"
      means any form of electronic, verbal, or written communication sent
      to the Licensor or its representatives, including but not limited to
      communication on electronic mailing lists, source code control systems,
      and issue tracking systems that are managed by, or on behalf of, the
      Licensor for the purpose of discussing and improving the Work, but
      excluding communication that is conspicuously marked or otherwise
      designated in writing by the copyright owner as "Not a Contribution."

      "Contributor" shall mean Licensor and any individual or Legal Entity
      on behalf of whom a Contribution has been received by Licensor and
      subsequently incorporated within the Work.

   2. Grant of Copyright License. Subject to the terms and conditions of
      this License, each Contributor hereby grants to You a perpetual,
      worldwide, non-exclusive, no-charge, royalty-free, irrevocable
      copyright license to reproduce, prepare Derivative Works of,
      publicly display, publicly perform, sublicense, and distribute the
      Work and such Derivative Works in Source or Object form.

   3. Grant of Patent License. Subject to the terms and conditions of
      this License, each Contributor hereby grants to You a perpetual,
      worldwide, non-exclusive, no-charge, royalty-free, irrevocable
      (except as stated in this section) patent license to make, have made,
      use, offer to sell, sell, import, and otherwise transfer the Work,
      where such license applies only to those patent claims licensable
      by such Contributor that are necessarily infringed by their
      Contribution(s) alone or by combination of their Contribution(s)
      with the Work to which such Contribution(s) was submitted. If You
      institute patent litigation against any entity (including a
      cross-claim or counterclaim in a lawsuit) alleging that the Work
      or a Contribution incorporated within the Work constitutes direct
      or contributory patent infringement, then any patent licenses
      granted to You under this License for that Work shall terminate
      as of the date such litigation is filed.

   4. Redistribution. You may reproduce and distribute copies of the
      Work or Derivative Works thereof in any medium, with or without
      modifications, and in Source or Object form, provided that You
      meet the following conditions:

      (a) You must give any other recipients of the Work or
          Derivative Works a copy of this License; and
      (b) You must cause any modified files to carry prominent notices
          stating that You changed the files; and

      (c) You must retain, in the Source form of any Derivative Works
          that You distribute, all copyright, patent, trademark, and
          attribution notices from the Source form of the Work,
          excluding those notices that do not pertain to any part of
          the Derivative Works; and

      (d) If the Work includes a "NOTICE" text file as part of its
          distribution, then any Derivative Works that You distribute must
          include a readable copy of the attribution notices contained
          within such NOTICE file, excluding those notices that do not
          pertain to any part of the Derivative Works, in at least one
          of the following places: within a NOTICE text file distributed
          as part of the Derivative Works; within the Source form or
          documentation, if provided along with the Derivative Works; or,
          within a display generated by the Derivative Works, if and
          wherever such third-party notices normally appear. The contents
          of the NOTICE file are for informational purposes only and
          do not modify the License. You may add Your own attribution
          notices within Derivative Works that You distribute, alongside
          or as an addendum to the NOTICE text from the Work, provided
          that such additional attribution notices cannot be construed
          as modifying the License.

      You may add Your own copyright statement to Your modifications and
      may provide additional or different license terms and conditions
      for use, reproduction, or distribution of Your modifications, or
      for any such Derivative Works as a whole, provided Your use,
      reproduction, and distribution of the Work otherwise complies with
      the conditions stated in this License.

   5. Submission of Contributions. Unless You explicitly state otherwise,
      any Contribution intentionally submitted for inclusion in the Work
      by You to the Licensor shall be under the terms and conditions of
      this License, without any additional terms or conditions.
      Notwithstanding the above, nothing herein shall supersede or modify
      the terms of any separate license agreement you may have executed
      with Licensor regarding such Contributions.

   6. Trademarks. This License does not grant permission to use the trade
      names, trademarks, service marks, or product names of the Licensor,
      except as required for reasonable and customary use in describing the
      origin of the Work and reproducing the content of the NOTICE file.

   7. Disclaimer of Warranty. Unless required by applicable law or
      agreed to in writing, Licensor provides the Work (and each
      Contributor provides its Contributions) on an "AS IS" BASIS,
      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
      implied, including, without limitation, any warranties or conditions
      of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
      PARTICULAR PURPOSE. You are solely responsible for determining the
      appropriateness of using or redistributing the Work and assume any
      risks associated with Your exercise of permissions under this License.

   8. Limitation of Liability. In no event and under no legal theory,
      whether in tort (including negligence), contract, or otherwise,
      unless required by applicable law (such as deliberate and grossly
      negligent acts) or agreed to in writing, shall any Contributor be
      liable to You for damages, including any direct, indirect, special,
      incidental, or consequential damages of any character arising as a
      result of this License or out of the use or inability to use the
      Work (including but not limited to damages for loss of goodwill,
      work stoppage, computer failure or malfunction, or any and all
      other commercial damages or losses), even if such Contributor
      has been advised of the possibility of such damages.

   9. Accepting Warranty or Additional Liability. While redistributing
      the Work or Derivative Works thereof, You may choose to offer,
      and charge a fee for, acceptance of support, warranty, indemnity,
      or other liability obligations and/or rights consistent with this
      License. However, in accepting such obligations, You may act only
      on Your own behalf and on Your sole responsibility, not on behalf
      of any other Contributor, and only if You agree to indemnify,
      defend, and hold each Contributor harmless for any liability
      incurred by, or claims asserted against, such Contributor by reason
      of your accepting any such warranty or additional liability.

   END OF TERMS AND CONDITIONS
```

The source code contains the following Copyright statements:
```
Copyright 2018-present, Leonid Stryzhevskyi <lganzzzo@gmail.com>
```

## azure-c-shared-utility

```
Microsoft Azure IoT SDKs 
Copyright (c) Microsoft Corporation
All rights reserved. 
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the ""Software""), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
```

Additional Copyright statements:

```
Copyright (C) Firmwave Ltd.
Copyright (c) 2017 Thomas Pornin <pornin@bolet.org>
Copyright (c) Texas Instruments
```

## azure-uamqp-c

```
Microsoft Azure IoT SDKs 
Copyright (c) Microsoft Corporation
All rights reserved. 
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy 
of this software and associated documentation files (the ""Software""), to deal 
in the Software without restriction, including without limitation the rights 
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
THE SOFTWARE.
```

## azure-uhttp-c

```
    MIT License

    Copyright (c) Microsoft Corporation. All rights reserved.

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE
```

## azure-umqtt-c

```
Microsoft Azure Mqtt Client 
Copyright (c) Microsoft Corporation
All rights reserved. 

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy 
of this software and associated documentation files (the ""Software""), to deal 
in the Software without restriction, including without limitation the rights 
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
THE SOFTWARE.
```

## azure-iot-sdk-c

```
Microsoft Azure IoT SDKs 
Copyright (c) Microsoft Corporation
All rights reserved. 
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy 
of this software and associated documentation files (the ""Software""), to deal 
in the Software without restriction, including without limitation the rights 
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
THE SOFTWARE.
```

Additional Copyright statements:
```
Copyright (c) Toradex AG.
Copyright (C) 2006 OpenWrt.org
```

## parson

```
MIT License

Copyright (c) 2012 - 2019 Krzysztof Gabis

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
```

## macro-utils-c

```
Microsoft Azure IoT SDKs 
Copyright (c) Microsoft Corporation
All rights reserved. 
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy 
of this software and associated documentation files (the ""Software""), to deal 
in the Software without restriction, including without limitation the rights 
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
THE SOFTWARE.
```

## cpp-base64

```
Copyright © 2004-2017 by René Nyffenegger

This source code is provided 'as-is', without any express or implied
warranty. In no event will the author be held liable for any damages
arising from the use of this software.
                                                                              
Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:
                                                                              
1. The origin of this source code must not be misrepresented; you must not
   claim that you wrote the original source code. If you use this source code
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
                                                                              
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original source code.
                                                                              
3. This notice may not be removed or altered from any source distribution.
```

The source code also contains this copyright statement:

```
Copyright (C) 2004-2017, 2020, 2021 René Nyffenegger
```

## doctest

```
The MIT License (MIT)

Copyright (c) 2016-2021 Viktor Kirilov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## gcc libatomic libstdc++ libstdc++-fs

### libatomic

Copyright notice from the source files:

```
/* Copyright (C) 2012-2017 Free Software Foundation, Inc.
   Contributed by Richard Henderson <rth@redhat.com>.

   This file is part of the GNU Atomic Library (libatomic).

   Libatomic is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   Libatomic is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */
```

The referenced files are attached below under libstdc++.

The libatomic source files only contain copyright references to
`
Copyright (C) 1992-2018 Free Software Foundation, Inc.
`

### libstdc++ and libstdc++-fs

Both libraries are built from the same source tree.
Copyright notice from the source files:

```
// Copyright (C) 2007-2017 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
```

Some source files also contain this notice in addition to the GPL notice:

```
 * Copyright (c) 1996-1999
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
```

and

```
// Copyright (C) 2004 Ami Tavory and Vladimir Dreizin, IBM-HRL.

// Permission to use, copy, modify, sell, and distribute this software
// is hereby granted without fee, provided that the above copyright
// notice appears in all copies, and that both that copyright notice
// and this permission notice appear in supporting documentation. None
// of the above authors, nor IBM Haifa Research Laboratories, make any
// representation about the suitability of this software for any
// purpose. It is provided "as is" without express or implied
// warranty.
```

and

```
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
```

and

```
//  shared_count.hpp
//  Copyright (c) 2001, 2002, 2003 Peter Dimov and Multi Media Ltd.

//  shared_ptr.hpp
//  Copyright (C) 1998, 1999 Greg Colvin and Beman Dawes.
//  Copyright (C) 2001, 2002, 2003 Peter Dimov

//  weak_ptr.hpp
//  Copyright (C) 2001, 2002, 2003 Peter Dimov

//  enable_shared_from_this.hpp
//  Copyright (C) 2002 Peter Dimov

// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// GCC Note:  based on version 1.32.0 of the Boost library.
```

and

```
// (C) Copyright Jeremy Siek 2000. Permission to copy, use, modify,
// sell and distribute this software is granted provided this
// copyright notice appears in all copies. This software is provided
// "as is" without express or implied warranty, and with no claim as
// to its suitability for any purpose.
```

Here is the COPYING3 file that comes with the source code:

```
                    GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The GNU General Public License is a free, copyleft license for
software and other kinds of works.

  The licenses for most software and other practical works are designed
to take away your freedom to share and change the works.  By contrast,
the GNU General Public License is intended to guarantee your freedom to
share and change all versions of a program--to make sure it remains free
software for all its users.  We, the Free Software Foundation, use the
GNU General Public License for most of our software; it applies also to
any other work released this way by its authors.  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
them if you wish), that you receive source code or can get it if you
want it, that you can change the software or use pieces of it in new
free programs, and that you know you can do these things.

  To protect your rights, we need to prevent others from denying you
these rights or asking you to surrender the rights.  Therefore, you have
certain responsibilities if you distribute copies of the software, or if
you modify it: responsibilities to respect the freedom of others.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must pass on to the recipients the same
freedoms that you received.  You must make sure that they, too, receive
or can get the source code.  And you must show them these terms so they
know their rights.

  Developers that use the GNU GPL protect your rights with two steps:
(1) assert copyright on the software, and (2) offer you this License
giving you legal permission to copy, distribute and/or modify it.

  For the developers' and authors' protection, the GPL clearly explains
that there is no warranty for this free software.  For both users' and
authors' sake, the GPL requires that modified versions be marked as
changed, so that their problems will not be attributed erroneously to
authors of previous versions.

  Some devices are designed to deny users access to install or run
modified versions of the software inside them, although the manufacturer
can do so.  This is fundamentally incompatible with the aim of
protecting users' freedom to change the software.  The systematic
pattern of such abuse occurs in the area of products for individuals to
use, which is precisely where it is most unacceptable.  Therefore, we
have designed this version of the GPL to prohibit the practice for those
products.  If such problems arise substantially in other domains, we
stand ready to extend this provision to those domains in future versions
of the GPL, as needed to protect the freedom of users.

  Finally, every program is threatened constantly by software patents.
States should not allow patents to restrict development and use of
software on general-purpose computers, but in those that do, we wish to
avoid the special danger that patents applied to a free program could
make it effectively proprietary.  To prevent this, the GPL assures that
patents cannot be used to render the program non-free.

  The precise terms and conditions for copying, distribution and
modification follow.

                       TERMS AND CONDITIONS

  0. Definitions.

  "This License" refers to version 3 of the GNU General Public License.

  "Copyright" also means copyright-like laws that apply to other kinds of
works, such as semiconductor masks.

  "The Program" refers to any copyrightable work licensed under this
License.  Each licensee is addressed as "you".  "Licensees" and
"recipients" may be individuals or organizations.

  To "modify" a work means to copy from or adapt all or part of the work
in a fashion requiring copyright permission, other than the making of an
exact copy.  The resulting work is called a "modified version" of the
earlier work or a work "based on" the earlier work.

  A "covered work" means either the unmodified Program or a work based
on the Program.

  To "propagate" a work means to do anything with it that, without
permission, would make you directly or secondarily liable for
infringement under applicable copyright law, except executing it on a
computer or modifying a private copy.  Propagation includes copying,
distribution (with or without modification), making available to the
public, and in some countries other activities as well.

  To "convey" a work means any kind of propagation that enables other
parties to make or receive copies.  Mere interaction with a user through
a computer network, with no transfer of a copy, is not conveying.

  An interactive user interface displays "Appropriate Legal Notices"
to the extent that it includes a convenient and prominently visible
feature that (1) displays an appropriate copyright notice, and (2)
tells the user that there is no warranty for the work (except to the
extent that warranties are provided), that licensees may convey the
work under this License, and how to view a copy of this License.  If
the interface presents a list of user commands or options, such as a
menu, a prominent item in the list meets this criterion.

  1. Source Code.

  The "source code" for a work means the preferred form of the work
for making modifications to it.  "Object code" means any non-source
form of a work.

  A "Standard Interface" means an interface that either is an official
standard defined by a recognized standards body, or, in the case of
interfaces specified for a particular programming language, one that
is widely used among developers working in that language.

  The "System Libraries" of an executable work include anything, other
than the work as a whole, that (a) is included in the normal form of
packaging a Major Component, but which is not part of that Major
Component, and (b) serves only to enable use of the work with that
Major Component, or to implement a Standard Interface for which an
implementation is available to the public in source code form.  A
"Major Component", in this context, means a major essential component
(kernel, window system, and so on) of the specific operating system
(if any) on which the executable work runs, or a compiler used to
produce the work, or an object code interpreter used to run it.

  The "Corresponding Source" for a work in object code form means all
the source code needed to generate, install, and (for an executable
work) run the object code and to modify the work, including scripts to
control those activities.  However, it does not include the work's
System Libraries, or general-purpose tools or generally available free
programs which are used unmodified in performing those activities but
which are not part of the work.  For example, Corresponding Source
includes interface definition files associated with source files for
the work, and the source code for shared libraries and dynamically
linked subprograms that the work is specifically designed to require,
such as by intimate data communication or control flow between those
subprograms and other parts of the work.

  The Corresponding Source need not include anything that users
can regenerate automatically from other parts of the Corresponding
Source.

  The Corresponding Source for a work in source code form is that
same work.

  2. Basic Permissions.

  All rights granted under this License are granted for the term of
copyright on the Program, and are irrevocable provided the stated
conditions are met.  This License explicitly affirms your unlimited
permission to run the unmodified Program.  The output from running a
covered work is covered by this License only if the output, given its
content, constitutes a covered work.  This License acknowledges your
rights of fair use or other equivalent, as provided by copyright law.

  You may make, run and propagate covered works that you do not
convey, without conditions so long as your license otherwise remains
in force.  You may convey covered works to others for the sole purpose
of having them make modifications exclusively for you, or provide you
with facilities for running those works, provided that you comply with
the terms of this License in conveying all material for which you do
not control copyright.  Those thus making or running the covered works
for you must do so exclusively on your behalf, under your direction
and control, on terms that prohibit them from making any copies of
your copyrighted material outside their relationship with you.

  Conveying under any other circumstances is permitted solely under
the conditions stated below.  Sublicensing is not allowed; section 10
makes it unnecessary.

  3. Protecting Users' Legal Rights From Anti-Circumvention Law.

  No covered work shall be deemed part of an effective technological
measure under any applicable law fulfilling obligations under article
11 of the WIPO copyright treaty adopted on 20 December 1996, or
similar laws prohibiting or restricting circumvention of such
measures.

  When you convey a covered work, you waive any legal power to forbid
circumvention of technological measures to the extent such circumvention
is effected by exercising rights under this License with respect to
the covered work, and you disclaim any intention to limit operation or
modification of the work as a means of enforcing, against the work's
users, your or third parties' legal rights to forbid circumvention of
technological measures.

  4. Conveying Verbatim Copies.

  You may convey verbatim copies of the Program's source code as you
receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy an appropriate copyright notice;
keep intact all notices stating that this License and any
non-permissive terms added in accord with section 7 apply to the code;
keep intact all notices of the absence of any warranty; and give all
recipients a copy of this License along with the Program.

  You may charge any price or no price for each copy that you convey,
and you may offer support or warranty protection for a fee.

  5. Conveying Modified Source Versions.

  You may convey a work based on the Program, or the modifications to
produce it from the Program, in the form of source code under the
terms of section 4, provided that you also meet all of these conditions:

    a) The work must carry prominent notices stating that you modified
    it, and giving a relevant date.

    b) The work must carry prominent notices stating that it is
    released under this License and any conditions added under section
    7.  This requirement modifies the requirement in section 4 to
    "keep intact all notices".

    c) You must license the entire work, as a whole, under this
    License to anyone who comes into possession of a copy.  This
    License will therefore apply, along with any applicable section 7
    additional terms, to the whole of the work, and all its parts,
    regardless of how they are packaged.  This License gives no
    permission to license the work in any other way, but it does not
    invalidate such permission if you have separately received it.

    d) If the work has interactive user interfaces, each must display
    Appropriate Legal Notices; however, if the Program has interactive
    interfaces that do not display Appropriate Legal Notices, your
    work need not make them do so.

  A compilation of a covered work with other separate and independent
works, which are not by their nature extensions of the covered work,
and which are not combined with it such as to form a larger program,
in or on a volume of a storage or distribution medium, is called an
"aggregate" if the compilation and its resulting copyright are not
used to limit the access or legal rights of the compilation's users
beyond what the individual works permit.  Inclusion of a covered work
in an aggregate does not cause this License to apply to the other
parts of the aggregate.

  6. Conveying Non-Source Forms.

  You may convey a covered work in object code form under the terms
of sections 4 and 5, provided that you also convey the
machine-readable Corresponding Source under the terms of this License,
in one of these ways:

    a) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by the
    Corresponding Source fixed on a durable physical medium
    customarily used for software interchange.

    b) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by a
    written offer, valid for at least three years and valid for as
    long as you offer spare parts or customer support for that product
    model, to give anyone who possesses the object code either (1) a
    copy of the Corresponding Source for all the software in the
    product that is covered by this License, on a durable physical
    medium customarily used for software interchange, for a price no
    more than your reasonable cost of physically performing this
    conveying of source, or (2) access to copy the
    Corresponding Source from a network server at no charge.

    c) Convey individual copies of the object code with a copy of the
    written offer to provide the Corresponding Source.  This
    alternative is allowed only occasionally and noncommercially, and
    only if you received the object code with such an offer, in accord
    with subsection 6b.

    d) Convey the object code by offering access from a designated
    place (gratis or for a charge), and offer equivalent access to the
    Corresponding Source in the same way through the same place at no
    further charge.  You need not require recipients to copy the
    Corresponding Source along with the object code.  If the place to
    copy the object code is a network server, the Corresponding Source
    may be on a different server (operated by you or a third party)
    that supports equivalent copying facilities, provided you maintain
    clear directions next to the object code saying where to find the
    Corresponding Source.  Regardless of what server hosts the
    Corresponding Source, you remain obligated to ensure that it is
    available for as long as needed to satisfy these requirements.

    e) Convey the object code using peer-to-peer transmission, provided
    you inform other peers where the object code and Corresponding
    Source of the work are being offered to the general public at no
    charge under subsection 6d.

  A separable portion of the object code, whose source code is excluded
from the Corresponding Source as a System Library, need not be
included in conveying the object code work.

  A "User Product" is either (1) a "consumer product", which means any
tangible personal property which is normally used for personal, family,
or household purposes, or (2) anything designed or sold for incorporation
into a dwelling.  In determining whether a product is a consumer product,
doubtful cases shall be resolved in favor of coverage.  For a particular
product received by a particular user, "normally used" refers to a
typical or common use of that class of product, regardless of the status
of the particular user or of the way in which the particular user
actually uses, or expects or is expected to use, the product.  A product
is a consumer product regardless of whether the product has substantial
commercial, industrial or non-consumer uses, unless such uses represent
the only significant mode of use of the product.

  "Installation Information" for a User Product means any methods,
procedures, authorization keys, or other information required to install
and execute modified versions of a covered work in that User Product from
a modified version of its Corresponding Source.  The information must
suffice to ensure that the continued functioning of the modified object
code is in no case prevented or interfered with solely because
modification has been made.

  If you convey an object code work under this section in, or with, or
specifically for use in, a User Product, and the conveying occurs as
part of a transaction in which the right of possession and use of the
User Product is transferred to the recipient in perpetuity or for a
fixed term (regardless of how the transaction is characterized), the
Corresponding Source conveyed under this section must be accompanied
by the Installation Information.  But this requirement does not apply
if neither you nor any third party retains the ability to install
modified object code on the User Product (for example, the work has
been installed in ROM).

  The requirement to provide Installation Information does not include a
requirement to continue to provide support service, warranty, or updates
for a work that has been modified or installed by the recipient, or for
the User Product in which it has been modified or installed.  Access to a
network may be denied when the modification itself materially and
adversely affects the operation of the network or violates the rules and
protocols for communication across the network.

  Corresponding Source conveyed, and Installation Information provided,
in accord with this section must be in a format that is publicly
documented (and with an implementation available to the public in
source code form), and must require no special password or key for
unpacking, reading or copying.

  7. Additional Terms.

  "Additional permissions" are terms that supplement the terms of this
License by making exceptions from one or more of its conditions.
Additional permissions that are applicable to the entire Program shall
be treated as though they were included in this License, to the extent
that they are valid under applicable law.  If additional permissions
apply only to part of the Program, that part may be used separately
under those permissions, but the entire Program remains governed by
this License without regard to the additional permissions.

  When you convey a copy of a covered work, you may at your option
remove any additional permissions from that copy, or from any part of
it.  (Additional permissions may be written to require their own
removal in certain cases when you modify the work.)  You may place
additional permissions on material, added by you to a covered work,
for which you have or can give appropriate copyright permission.

  Notwithstanding any other provision of this License, for material you
add to a covered work, you may (if authorized by the copyright holders of
that material) supplement the terms of this License with terms:

    a) Disclaiming warranty or limiting liability differently from the
    terms of sections 15 and 16 of this License; or

    b) Requiring preservation of specified reasonable legal notices or
    author attributions in that material or in the Appropriate Legal
    Notices displayed by works containing it; or

    c) Prohibiting misrepresentation of the origin of that material, or
    requiring that modified versions of such material be marked in
    reasonable ways as different from the original version; or

    d) Limiting the use for publicity purposes of names of licensors or
    authors of the material; or

    e) Declining to grant rights under trademark law for use of some
    trade names, trademarks, or service marks; or

    f) Requiring indemnification of licensors and authors of that
    material by anyone who conveys the material (or modified versions of
    it) with contractual assumptions of liability to the recipient, for
    any liability that these contractual assumptions directly impose on
    those licensors and authors.

  All other non-permissive additional terms are considered "further
restrictions" within the meaning of section 10.  If the Program as you
received it, or any part of it, contains a notice stating that it is
governed by this License along with a term that is a further
restriction, you may remove that term.  If a license document contains
a further restriction but permits relicensing or conveying under this
License, you may add to a covered work material governed by the terms
of that license document, provided that the further restriction does
not survive such relicensing or conveying.

  If you add terms to a covered work in accord with this section, you
must place, in the relevant source files, a statement of the
additional terms that apply to those files, or a notice indicating
where to find the applicable terms.

  Additional terms, permissive or non-permissive, may be stated in the
form of a separately written license, or stated as exceptions;
the above requirements apply either way.

  8. Termination.

  You may not propagate or modify a covered work except as expressly
provided under this License.  Any attempt otherwise to propagate or
modify it is void, and will automatically terminate your rights under
this License (including any patent licenses granted under the third
paragraph of section 11).

  However, if you cease all violation of this License, then your
license from a particular copyright holder is reinstated (a)
provisionally, unless and until the copyright holder explicitly and
finally terminates your license, and (b) permanently, if the copyright
holder fails to notify you of the violation by some reasonable means
prior to 60 days after the cessation.

  Moreover, your license from a particular copyright holder is
reinstated permanently if the copyright holder notifies you of the
violation by some reasonable means, this is the first time you have
received notice of violation of this License (for any work) from that
copyright holder, and you cure the violation prior to 30 days after
your receipt of the notice.

  Termination of your rights under this section does not terminate the
licenses of parties who have received copies or rights from you under
this License.  If your rights have been terminated and not permanently
reinstated, you do not qualify to receive new licenses for the same
material under section 10.

  9. Acceptance Not Required for Having Copies.

  You are not required to accept this License in order to receive or
run a copy of the Program.  Ancillary propagation of a covered work
occurring solely as a consequence of using peer-to-peer transmission
to receive a copy likewise does not require acceptance.  However,
nothing other than this License grants you permission to propagate or
modify any covered work.  These actions infringe copyright if you do
not accept this License.  Therefore, by modifying or propagating a
covered work, you indicate your acceptance of this License to do so.

  10. Automatic Licensing of Downstream Recipients.

  Each time you convey a covered work, the recipient automatically
receives a license from the original licensors, to run, modify and
propagate that work, subject to this License.  You are not responsible
for enforcing compliance by third parties with this License.

  An "entity transaction" is a transaction transferring control of an
organization, or substantially all assets of one, or subdividing an
organization, or merging organizations.  If propagation of a covered
work results from an entity transaction, each party to that
transaction who receives a copy of the work also receives whatever
licenses to the work the party's predecessor in interest had or could
give under the previous paragraph, plus a right to possession of the
Corresponding Source of the work from the predecessor in interest, if
the predecessor has it or can get it with reasonable efforts.

  You may not impose any further restrictions on the exercise of the
rights granted or affirmed under this License.  For example, you may
not impose a license fee, royalty, or other charge for exercise of
rights granted under this License, and you may not initiate litigation
(including a cross-claim or counterclaim in a lawsuit) alleging that
any patent claim is infringed by making, using, selling, offering for
sale, or importing the Program or any portion of it.

  11. Patents.

  A "contributor" is a copyright holder who authorizes use under this
License of the Program or a work on which the Program is based.  The
work thus licensed is called the contributor's "contributor version".

  A contributor's "essential patent claims" are all patent claims
owned or controlled by the contributor, whether already acquired or
hereafter acquired, that would be infringed by some manner, permitted
by this License, of making, using, or selling its contributor version,
but do not include claims that would be infringed only as a
consequence of further modification of the contributor version.  For
purposes of this definition, "control" includes the right to grant
patent sublicenses in a manner consistent with the requirements of
this License.

  Each contributor grants you a non-exclusive, worldwide, royalty-free
patent license under the contributor's essential patent claims, to
make, use, sell, offer for sale, import and otherwise run, modify and
propagate the contents of its contributor version.

  In the following three paragraphs, a "patent license" is any express
agreement or commitment, however denominated, not to enforce a patent
(such as an express permission to practice a patent or covenant not to
sue for patent infringement).  To "grant" such a patent license to a
party means to make such an agreement or commitment not to enforce a
patent against the party.

  If you convey a covered work, knowingly relying on a patent license,
and the Corresponding Source of the work is not available for anyone
to copy, free of charge and under the terms of this License, through a
publicly available network server or other readily accessible means,
then you must either (1) cause the Corresponding Source to be so
available, or (2) arrange to deprive yourself of the benefit of the
patent license for this particular work, or (3) arrange, in a manner
consistent with the requirements of this License, to extend the patent
license to downstream recipients.  "Knowingly relying" means you have
actual knowledge that, but for the patent license, your conveying the
covered work in a country, or your recipient's use of the covered work
in a country, would infringe one or more identifiable patents in that
country that you have reason to believe are valid.

  If, pursuant to or in connection with a single transaction or
arrangement, you convey, or propagate by procuring conveyance of, a
covered work, and grant a patent license to some of the parties
receiving the covered work authorizing them to use, propagate, modify
or convey a specific copy of the covered work, then the patent license
you grant is automatically extended to all recipients of the covered
work and works based on it.

  A patent license is "discriminatory" if it does not include within
the scope of its coverage, prohibits the exercise of, or is
conditioned on the non-exercise of one or more of the rights that are
specifically granted under this License.  You may not convey a covered
work if you are a party to an arrangement with a third party that is
in the business of distributing software, under which you make payment
to the third party based on the extent of your activity of conveying
the work, and under which the third party grants, to any of the
parties who would receive the covered work from you, a discriminatory
patent license (a) in connection with copies of the covered work
conveyed by you (or copies made from those copies), or (b) primarily
for and in connection with specific products or compilations that
contain the covered work, unless you entered into that arrangement,
or that patent license was granted, prior to 28 March 2007.

  Nothing in this License shall be construed as excluding or limiting
any implied license or other defenses to infringement that may
otherwise be available to you under applicable patent law.

  12. No Surrender of Others' Freedom.

  If conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot convey a
covered work so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you may
not convey it at all.  For example, if you agree to terms that obligate you
to collect a royalty for further conveying from those to whom you convey
the Program, the only way you could satisfy both those terms and this
License would be to refrain entirely from conveying the Program.

  13. Use with the GNU Affero General Public License.

  Notwithstanding any other provision of this License, you have
permission to link or combine any covered work with a work licensed
under version 3 of the GNU Affero General Public License into a single
combined work, and to convey the resulting work.  The terms of this
License will continue to apply to the part which is the covered work,
but the special requirements of the GNU Affero General Public License,
section 13, concerning interaction through a network will apply to the
combination as such.

  14. Revised Versions of this License.

  The Free Software Foundation may publish revised and/or new versions of
the GNU General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

  Each version is given a distinguishing version number.  If the
Program specifies that a certain numbered version of the GNU General
Public License "or any later version" applies to it, you have the
option of following the terms and conditions either of that numbered
version or of any later version published by the Free Software
Foundation.  If the Program does not specify a version number of the
GNU General Public License, you may choose any version ever published
by the Free Software Foundation.

  If the Program specifies that a proxy can decide which future
versions of the GNU General Public License can be used, that proxy's
public statement of acceptance of a version permanently authorizes you
to choose that version for the Program.

  Later license versions may give you additional or different
permissions.  However, no additional obligations are imposed on any
author or copyright holder as a result of your choosing to follow a
later version.

  15. Disclaimer of Warranty.

  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY
OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM
IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF
ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

  16. Limitation of Liability.

  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS
THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY
GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF
DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD
PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),
EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF
SUCH DAMAGES.

  17. Interpretation of Sections 15 and 16.

  If the disclaimer of warranty and limitation of liability provided
above cannot be given local legal effect according to their terms,
reviewing courts shall apply local law that most closely approximates
an absolute waiver of all civil liability in connection with the
Program, unless a warranty or assumption of liability accompanies a
copy of the Program in return for a fee.

                     END OF TERMS AND CONDITIONS

            How to Apply These Terms to Your New Programs

  If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these terms.

  To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
state the exclusion of warranty; and each file should have at least
the "copyright" line and a pointer to where the full notice is found.

    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

Also add information on how to contact you by electronic and paper mail.

  If the program does terminal interaction, make it output a short
notice like this when it starts in an interactive mode:

    <program>  Copyright (C) <year>  <name of author>
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.

The hypothetical commands `show w' and `show c' should show the appropriate
parts of the General Public License.  Of course, your program's commands
might be different; for a GUI interface, you would use an "about box".

  You should also get your employer (if you work as a programmer) or school,
if any, to sign a "copyright disclaimer" for the program, if necessary.
For more information on this, and how to apply and follow the GNU GPL, see
<http://www.gnu.org/licenses/>.

  The GNU General Public License does not permit incorporating your program
into proprietary programs.  If your program is a subroutine library, you
may consider it more useful to permit linking proprietary applications with
the library.  If this is what you want to do, use the GNU Lesser General
Public License instead of this License.  But first, please read
<http://www.gnu.org/philosophy/why-not-lgpl.html>.
```

Here is the COPYING.RUNTIME file that comes with the source code:

```
GCC RUNTIME LIBRARY EXCEPTION

Version 3.1, 31 March 2009

Copyright (C) 2009 Free Software Foundation, Inc. <http://fsf.org/>

Everyone is permitted to copy and distribute verbatim copies of this
license document, but changing it is not allowed.

This GCC Runtime Library Exception ("Exception") is an additional
permission under section 7 of the GNU General Public License, version
3 ("GPLv3"). It applies to a given file (the "Runtime Library") that
bears a notice placed by the copyright holder of the file stating that
the file is governed by GPLv3 along with this Exception.

When you use GCC to compile a program, GCC may combine portions of
certain GCC header files and runtime libraries with the compiled
program. The purpose of this Exception is to allow compilation of
non-GPL (including proprietary) programs to use, in this way, the
header files and runtime libraries covered by this Exception.

0. Definitions.

A file is an "Independent Module" if it either requires the Runtime
Library for execution after a Compilation Process, or makes use of an
interface provided by the Runtime Library, but is not otherwise based
on the Runtime Library.

"GCC" means a version of the GNU Compiler Collection, with or without
modifications, governed by version 3 (or a specified later version) of
the GNU General Public License (GPL) with the option of using any
subsequent versions published by the FSF.

"GPL-compatible Software" is software whose conditions of propagation,
modification and use would permit combination with GCC in accord with
the license of GCC.

"Target Code" refers to output from any compiler for a real or virtual
target processor architecture, in executable form or suitable for
input to an assembler, loader, linker and/or execution
phase. Notwithstanding that, Target Code does not include data in any
format that is used as a compiler intermediate representation, or used
for producing a compiler intermediate representation.

The "Compilation Process" transforms code entirely represented in
non-intermediate languages designed for human-written code, and/or in
Java Virtual Machine byte code, into Target Code. Thus, for example,
use of source code generators and preprocessors need not be considered
part of the Compilation Process, since the Compilation Process can be
understood as starting with the output of the generators or
preprocessors.

A Compilation Process is "Eligible" if it is done using GCC, alone or
with other GPL-compatible software, or if it is done without using any
work based on GCC. For example, using non-GPL-compatible Software to
optimize any GCC intermediate representations would not qualify as an
Eligible Compilation Process.

1. Grant of Additional Permission.

You have permission to propagate a work of Target Code formed by
combining the Runtime Library with Independent Modules, even if such
propagation would otherwise violate the terms of GPLv3, provided that
all Target Code was generated by Eligible Compilation Processes. You
may then convey such a combination under terms of your choice,
consistent with the licensing of the Independent Modules.

2. No Weakening of GCC Copyleft.

The availability of this Exception does not imply any general
presumption that third-party software is unaffected by the copyleft
requirements of the license of GCC.
```

## openssl

The README file supplied with the source states:

```
 OpenSSL 1.1.1h 22 Sep 2020

 Copyright (c) 1998-2020 The OpenSSL Project
 Copyright (c) 1995-1998 Eric A. Young, Tim J. Hudson
 All rights reserved.

 DESCRIPTION
 -----------

 The OpenSSL Project is a collaborative effort to develop a robust,
 commercial-grade, fully featured, and Open Source toolkit implementing the
 Transport Layer Security (TLS) protocols (including SSLv3) as well as a
 full-strength general purpose cryptographic library.

 OpenSSL is descended from the SSLeay library developed by Eric A. Young
 and Tim J. Hudson.  The OpenSSL toolkit is licensed under a dual-license (the
 OpenSSL license plus the SSLeay license), which means that you are free to
 get and use it for commercial and non-commercial purposes as long as you
 fulfill the conditions of both licenses.

...

 LEGALITIES
 ----------

 A number of nations restrict the use or export of cryptography. If you
 are potentially subject to such restrictions you should seek competent
 professional legal advice before attempting to develop or distribute
 cryptographic code.
```

This is the LICENSE file supplied with the source code:

```

  LICENSE ISSUES
  ==============

  The OpenSSL toolkit stays under a double license, i.e. both the conditions of
  the OpenSSL License and the original SSLeay license apply to the toolkit.
  See below for the actual license texts.

  OpenSSL License
  ---------------

/* ====================================================================
 * Copyright (c) 1998-2019 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

 Original SSLeay License
 -----------------------

/* Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 *
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 *
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 *
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */
```

Fulfilling the requirements of the licenses:

This product includes software developed by the OpenSSL Project
for use in the OpenSSL Toolkit. (http://www.openssl.org/)

This product includes cryptographic software written by
Eric Young (eay@cryptsoft.com)

This product includes software written by Tim Hudson (tjh@cryptsoft.com).

This is the AUTHORS file from the source package:

```
# This is the list of OpenSSL authors for copyright purposes.
#
# This does not necessarily list everyone who has contributed code, since in
# some cases, their employer may be the copyright holder.  To see the full list
# of contributors, see the revision history in source control.
OpenSSL Software Services, Inc.
OpenSSL Software Foundation, Inc.

# Individuals
Andy Polyakov
Ben Laurie
Ben Kaduk
Bernd Edlinger
Bodo Möller
David Benjamin
Emilia Käsper
Eric Young
Geoff Thorpe
Holger Reif
Kurt Roeckx
Lutz Jänicke
Mark J. Cox
Matt Caswell
Matthias St. Pierre
Nils Larsch
Paul Dale
Paul C. Sutton
Ralf S. Engelschall
Rich Salz
Richard Levitte
Stephen Henson
Steve Marquess
Tim Hudson
Ulf Möller
Viktor Dukhovni
```

Copyright headers from the source files. The statement
`Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.`
has been omitted since it applies to (almost) all files.

```
./external/perl/Text-Template-1.46/COPYING: Copyright (C) 1989, 1991 Free Software Foundation, Inc.
./crypto/mem_sec.c: Copyright 2004-2014, Akamai Technologies. All Rights Reserved.
./crypto/aria/aria.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./crypto/aria/aria.c: Copyright (C) 2017 National Security Research Institute. All Rights Reserved.
./crypto/LPdir_win.c: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./crypto/evp/e_aria.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./crypto/evp/e_sm4.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/LPdir_win32.c: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./crypto/LPdir_vms.c: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./crypto/ec/ecp_mont.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ecp_nistz256.c: Copyright (c) 2014, Intel Corporation. All Rights Reserved.
./crypto/ec/ecp_nistz256.c: Copyright (c) 2015, CloudFlare, Inc.
./crypto/ec/ec2_oct.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec_key.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ecp_nistp521.c:/* Copyright 2011 Google Inc.
./crypto/ec/ec_lib.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec_curve.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec_cvt.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/eck_prn.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ecp_smpl.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ecp_nist.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec_mult.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec2_smpl.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/curve448/field.h: Copyright 2014 Cryptography Research, Inc.
./crypto/ec/curve448/ed448.h: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/eddsa.c: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/point_448.h: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/word.h: Copyright 2014 Cryptography Research, Inc.
./crypto/ec/curve448/curve448.c: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/arch_32/arch_intrinsics.h: Copyright 2016 Cryptography Research, Inc.
./crypto/ec/curve448/arch_32/f_impl.h: Copyright 2014-2016 Cryptography Research, Inc.
./crypto/ec/curve448/arch_32/f_impl.c: Copyright 2014 Cryptography Research, Inc.
./crypto/ec/curve448/curve448utils.h: Copyright 2015 Cryptography Research, Inc.
./crypto/ec/curve448/f_generic.c: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/scalar.c: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/curve448/curve448_tables.c: Copyright 2015-2016 Cryptography Research, Inc.
./crypto/ec/ecdh_ossl.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/asm/ecp_nistz256-x86_64.pl:# Copyright (c) 2014, Intel Corporation. All Rights Reserved.
./crypto/ec/asm/ecp_nistz256-x86_64.pl:# Copyright (c) 2015 CloudFlare, Inc.
./crypto/ec/ecp_nistp224.c:/* Copyright 2011 Google Inc.
./crypto/ec/ecp_oct.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ec_oct.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/ec/ecp_nistputil.c:/* Copyright 2011 Google Inc.
./crypto/ec/ecp_nistp256.c:/* Copyright 2011 Google Inc.
./crypto/ec/ec_local.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/sm3/sm3.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/sm3/m_sm3.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/sm3/sm3_local.h: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/LPdir_unix.c: Copyright (c) 2004, 2018, Richard Levitte <richard@levitte.org>
./crypto/sm2/sm2_sign.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/sm2/sm2_crypt.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/blake2/blake2b.c: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/blake2/blake2_impl.h: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/blake2/blake2_local.h: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/blake2/blake2s.c: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/blake2/m_blake2b.c: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/blake2/m_blake2s.c: Copyright 2012, Samuel Neves <sneves@dei.uc.pt>
./crypto/bn/rsaz_exp.c: Copyright (c) 2012, Intel Corporation. All Rights Reserved.
./crypto/bn/rsaz_exp.h: Copyright (c) 2012, Intel Corporation. All Rights Reserved.
./crypto/bn/bn_gf2m.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/bn/asm/rsaz-avx2.pl:# Copyright (c) 2012, Intel Corporation. All Rights Reserved.
./crypto/bn/asm/rsaz-x86_64.pl:# Copyright (c) 2012, Intel Corporation. All Rights Reserved.
./crypto/siphash/siphash.c:   Copyright (c) 2012-2016 Jean-Philippe Aumasson
./crypto/siphash/siphash.c:   Copyright (c) 2012-2014 Daniel J. Bernstein
./crypto/cryptlib.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/x509v3/v3_pci.c: Copyright (c) 2004 Kungliga Tekniska Högskolan
./crypto/x509v3/v3_pcia.c: Copyright (c) 2004 Kungliga Tekniska Högskolan
./crypto/camellia/camellia.c: Copyright 2006 NTT (Nippon Telegraph and Telephone Corporation) .
./crypto/camellia/asm/cmll-x86.pl:# Copyright (c) 2008 Andy Polyakov <appro@openssl.org>
./crypto/camellia/asm/cmll-x86_64.pl:# Copyright (c) 2008 Andy Polyakov <appro@openssl.org>
./crypto/camellia/cmll_local.h: Copyright 2006 NTT (Nippon Telegraph and Telephone Corporation) .
./crypto/LPdir_nyi.c: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./crypto/rsa/rsa_mp.c: Copyright 2017 BaishanCloud. All rights reserved.
./crypto/LPdir_wince.c: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./crypto/srp/srp_lib.c: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./crypto/srp/srp_vfy.c: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./crypto/seed/seed_local.h: Copyright (c) 2007 KISA(Korea Information Security Agency). All rights reserved.
./crypto/seed/seed.c: Copyright (c) 2007 KISA(Korea Information Security Agency). All rights reserved.
./crypto/sm4/sm4.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./crypto/engine/eng_list.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/engine/eng_openssl.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/engine/eng_fat.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/engine/eng_local.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./crypto/bio/b_print.c: Copyright Patrick Powell 1995
./doc/man3/EVP_sm4_cbc.pod:Copyright 2017 Ribose Inc. All Rights Reserved.
./doc/man3/EVP_sm3.pod:Copyright 2017 Ribose Inc. All Rights Reserved.
./test/testutil/tap_bio.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/rsa_mp_test.c: Copyright 2017 BaishanCloud. All rights reserved.
./test/x509_dup_cert_test.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/certs/mkcert.sh:# Copyright (c) 2016 Viktor Dukhovni <openssl-users@dukhovni.org>.
./test/stack_test.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/servername_test.c: Copyright 2017 BaishanCloud. All rights reserved.
./test/ectest.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./test/ssltest_old.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./test/ssltest_old.c: Copyright 2005 Nokia. All rights reserved.
./test/recipes/03-test_internal_sm4.t:# Copyright 2017 [Ribose Inc.](https://www.ribose.com). All Rights Reserved.
./test/recipes/80-test_ciphername.t:# Copyright 2017 BaishanCloud. All rights reserved.
./test/recipes/60-test_x509_dup_cert.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/20-test_enc_more.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/15-test_mp_rsa.t:# Copyright 2017 BaishanCloud. All rights reserved.
./test/recipes/70-test_servername.t:# Copyright 2017 BaishanCloud. All rights reserved.
./test/recipes/02-test_internal_ctype.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/02-test_stack.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/95-test_external_pyca_data/cryptography.sh:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/02-test_lhash.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/recipes/01-test_test.t:# Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/sm4_internal_test.c: Copyright 2017 Ribose Inc. All Rights Reserved.
./test/lhash_test.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./test/ecdsatest.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./test/ciphername_test.c: Copyright 2017 BaishanCloud. All rights reserved.
./test/test_test.c: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./ssl/tls_srp.c: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./ssl/statem/statem_srvr.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/statem/statem_srvr.c: Copyright 2005 Nokia. All rights reserved.
./ssl/statem/statem_clnt.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/statem/statem_clnt.c: Copyright 2005 Nokia. All rights reserved.
./ssl/statem/statem_lib.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/d1_srtp.c: Copyright (C) 2006, Network Resonance, Inc. Copyright (C) 2011, RTFM, Inc.
./ssl/ssl_txt.c: Copyright 2005 Nokia. All rights reserved.
./ssl/s3_enc.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_ciph.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/ssl_ciph.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_local.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/ssl_local.h: Copyright 2005 Nokia. All rights reserved.
./ssl/t1_enc.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_lib.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/ssl_lib.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_cert.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/ssl_stat.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_sess.c: Copyright 2005 Nokia. All rights reserved.
./ssl/ssl_asn1.c: Copyright 2005 Nokia. All rights reserved.
./ssl/s3_lib.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ssl/s3_lib.c: Copyright 2005 Nokia. All rights reserved.
./ipkg-install/etc/ssl/misc/tsget.pl:# Copyright (c) 2002 The OpenTSA Project. All rights reserved.
./ipkg-install/usr/include/openssl/ec.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/crypto.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/ssl.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/ssl.h: Copyright 2005 Nokia. All rights reserved.
./ipkg-install/usr/include/openssl/srtp.h: Copyright (C) 2006, Network Resonance, Inc. Copyright (C) 2011, RTFM, Inc.
./ipkg-install/usr/include/openssl/ssl3.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/engine.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/x509.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/tls1.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./ipkg-install/usr/include/openssl/tls1.h: Copyright 2005 Nokia. All rights reserved.
./ipkg-install/usr/include/openssl/srp.h: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./ipkg-install/usr/include/openssl/seed.h: Copyright (c) 2007 KISA(Korea Information Security Agency). All rights reserved.
./ipkg-install/usr/include/openssl/bn.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/internal/o_dir.h: Copyright (c) 2004, Richard Levitte <richard@levitte.org>
./include/crypto/sha.h: Copyright (c) 2018, Oracle and/or its affiliates.  All rights reserved.
./include/crypto/sm4.h: Copyright 2017 Ribose Inc. All Rights Reserved.
./include/crypto/sm3.h: Copyright 2017 Ribose Inc. All Rights Reserved.
./include/crypto/aria.h: Copyright (c) 2017, Oracle and/or its affiliates.  All rights reserved.
./include/crypto/aria.h: /* Copyright (c) 2017 National Security Research Institute.  All rights reserved. */
./include/crypto/sm2.h: Copyright 2017 Ribose Inc. All Rights Reserved.
./include/openssl/ec.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/crypto.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/ssl.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/ssl.h: Copyright 2005 Nokia. All rights reserved.
./include/openssl/srtp.h: Copyright (C) 2006, Network Resonance, Inc. Copyright (C) 2011, RTFM, Inc.
./include/openssl/ssl3.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/engine.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/x509.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/tls1.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./include/openssl/tls1.h: Copyright 2005 Nokia. All rights reserved.
./include/openssl/srp.h: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./include/openssl/seed.h: Copyright (c) 2007 KISA(Korea Information Security Agency). All rights reserved.
./include/openssl/bn.h: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./apps/vms_term_sock.h: Copyright 2016 VMS Software, Inc. All Rights Reserved.
./apps/srp.c: Copyright (c) 2004, EdelKey Project. All Rights Reserved.
./apps/vms_term_sock.c: Copyright 2016 VMS Software, Inc. All Rights Reserved.
./apps/ecparam.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./apps/s_client.c: Copyright 2005 Nokia. All rights reserved.
./apps/tsget.pl:# Copyright (c) 2002 The OpenTSA Project. All rights reserved.
./apps/speed.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./apps/tsget.in:# Copyright (c) 2002 The OpenTSA Project. All rights reserved.
./apps/rehash.c: Copyright (c) 2013-2014 Timo Teräs <timo.teras@gmail.com>
./apps/s_server.c: Copyright (c) 2002, Oracle and/or its affiliates. All rights reserved
./apps/s_server.c: Copyright 2005 Nokia. All rights reserved.
```

## curl libcurl

The COPYING file supplied with the source is reproduced here:

```
COPYRIGHT AND PERMISSION NOTICE

Copyright (c) 1996 - 2019, Daniel Stenberg, <daniel@haxx.se>, and many
contributors, see the THANKS file.

All rights reserved.

Permission to use, copy, modify, and distribute this software for any purpose
with or without fee is hereby granted, provided that the above copyright
notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. IN
NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of a copyright holder shall not
be used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization of the copyright holder.
```

Copyright headers from the source files:

```
./maketgz: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/zz60-xc-ovr.m4: Copyright (c) 2013 Daniel Stenberg <daniel@haxx.se>
./m4/xc-am-iface.m4: Copyright (c) 2013 Daniel Stenberg <daniel@haxx.se>
./m4/zz40-xc-ovr.m4: Copyright (c) 2013 - 2018 Daniel Stenberg <daniel@haxx.se>
./m4/xc-cc-check.m4: Copyright (c) 2013 Daniel Stenberg <daniel@haxx.se>
./m4/curl-compilers.m4: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/xc-translit.m4: Copyright (c) 2011 Daniel Stenberg <daniel@haxx.se>
./m4/xc-val-flgs.m4: Copyright (c) 2013 Daniel Stenberg <daniel@haxx.se>
./m4/curl-confopts.m4: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/curl-functions.m4: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/curl-reentrant.m4: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/xc-lt-iface.m4: Copyright (c) 2013 Daniel Stenberg <daniel@haxx.se>
./m4/curl-openssl.m4: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./m4/zz50-xc-ovr.m4: Copyright (c) 2011 Daniel Stenberg <daniel@haxx.se>
./m4/ax_compile_check_sizeof.m4:   Copyright (c) 2008 Kaveh Ghazi <ghazi@caip.rutgers.edu>
./m4/ax_compile_check_sizeof.m4:   Copyright (c) 2017 Reini Urban <rurban@cpan.org>
./tests/objnames-test08.sh: Copyright (C) 2013 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/directories.pm: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/sshserver.pl: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/nroff-scan.pl: Copyright (C) 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/manpage-syntax.pl: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/certs/Makefile.in: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/scripts/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/certs/scripts/Makefile.in: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/scripts/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/certs/scripts/Makefile: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/scripts/Makefile.am: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/certs/Makefile: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/certs/Makefile.am: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/data/Makefile.inc: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/data/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/data/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/data/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/data/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/extern-scan.pl: Copyright (C) 2010-2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/python_dependencies/impacket/structure.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/__init__.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/ntlm.py: Copyright (c) 2003-2016 CORE Security Technologies:
./tests/python_dependencies/impacket/smb3structs.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/version.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/version.py:BANNER = "Impacket v%s.%s - Copyright 2002-2016 Core Security Technologies\n" % (VER_MAJOR,VER_MINOR)
./tests/python_dependencies/impacket/smb.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/smb.py: Copyright (C) 2001 Michael Teo <michaelteo@bigfoot.com>
./tests/python_dependencies/impacket/nmb.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/nmb.py: Copyright (C) 2001 Michael Teo <michaelteo@bigfoot.com>
./tests/python_dependencies/impacket/smbserver.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/smb3.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/uuid.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/spnego.py: Copyright (c) 2003-2016 CORE Security Technologies
./tests/python_dependencies/impacket/nt_errors.py: Copyright (c) 2003-2016 CORE Security Technologies)
./tests/symbol-scan.pl: Copyright (C) 2010-2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib539.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib579.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/stub_gssapi.c: Copyright (C) 2017-2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib533.c: Copyright (C) 1998 - 2011, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1520.c: Copyright (C) 2014, Steve Holme, <steve_holme@hotmail.com>.
./tests/libtest/lib574.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib530.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib511.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/stub_gssapi.h: Copyright (C) 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1508.c: Copyright (C) 2013, Linus Nielsen Feltzing <linus@haxx.se>
./tests/libtest/lib1531.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib558.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib503.c: Copyright (C) 1998 - 2012, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1535.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1555.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib598.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib576.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib541.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/libauthretry.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib513.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1527.c: Copyright (C) 1998 - 2016, Vijay Panghal, <vpanghal@maginatics.com>, et al.
./tests/libtest/lib1559.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1593.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1905.c: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib549.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib521.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib517.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1541.c: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib537.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib650.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib573.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib554.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib506.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib659.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib540.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib562.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib567.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib509.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib560.c: Copyright (C) 1998 - 2011, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1537.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib590.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib589.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib552.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib586.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/libntlmconnect.c: Copyright (C) 2012 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1502.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/libtest/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib566.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1515.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib526.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib543.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1557.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib519.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib553.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1506.c: Copyright (C) 2013 - 2018, Linus Nielsen Feltzing <linus@haxx.se>
./tests/libtest/lib547.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1523.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib525.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib504.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1509.c: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/mk-lib1521.pl: Copyright (C) 2017 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/mk-lib1521.pl: Copyright (C) 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib583.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib524.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib514.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/test.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib544.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/chkhostname.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1592.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib575.c: Copyright (C) 1998 - 2011, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib578.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1906.c: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib599.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1514.c: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1529.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib655.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1512.c: Copyright (C) 2013 - 2018, Linus Nielsen Feltzing <linus@haxx.se>
./tests/libtest/lib512.c: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1558.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1556.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/sethostname.h: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1554.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/testutil.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1156.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib507.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1517.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib557.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib502.c: Copyright (C) 1998 - 2011, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib571.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1551.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1538.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1513.c: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib564.c: Copyright (C) 1998 - 2013, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib505.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib597.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1528.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1500.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib568.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib518.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1525.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1525.c: Copyright (C) 2014, Vijay Panghal, <vpanghal@maginatics.com>, et al.
./tests/libtest/lib515.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1591.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1530.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/chkdecimalpoint.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/testtrace.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1900.c: Copyright (C) 2013 - 2019, Linus Nielsen Feltzing, <linus@haxx.se>
./tests/libtest/lib1533.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1553.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/libtest/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1501.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib651.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1552.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/sethostname.c: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib591.c: Copyright (C) 1998 - 2012, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/first.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib652.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib582.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1511.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1532.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1534.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib556.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib500.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1518.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib559.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1536.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib653.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/testutil.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib542.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/testtrace.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib510.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib569.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1550.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1594.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1522.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib654.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib643.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1540.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib501.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1560.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib508.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib1526.c: Copyright (C) 1998 - 2016, Vijay Panghal, <vpanghal@maginatics.com>, et al.
./tests/libtest/lib1510.c: Copyright (C) 2013 - 2018, Linus Nielsen Feltzing <linus@haxx.se>
./tests/libtest/lib1507.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib516.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib523.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib572.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib555.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib520.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib658.c: Copyright (C) 1998 - 2011, 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/libtest/lib570.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/ftp.pm: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/testcurl.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/objnames.inc: Copyright (C) 2012 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/mem-include-scan.pl: Copyright (C) 2010-2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/sshhelp.pm: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/disable-scan.pl: Copyright (C) 2010-2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/ftpserver.pl: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/pathhelp.pm: Copyright (C) 2016, Evgeny Grin (Karlson2k), <k2k@narod.ru>.
./tests/server/testpart.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/server_setup.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/sws.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/fake_ntlm.c: Copyright (C) 2010, Mandy Wu, <mandy.wu@intel.com>
./tests/server/fake_ntlm.c: Copyright (C) 2011 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/disabled.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/getpart.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/server/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/tftpd.c: Copyright (c) 1983 Regents of the University of California.
./tests/server/util.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/server_sockaddr.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/util.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/tftp.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/getpart.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/server/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/socksd.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/resolve.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/sockfilt.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/server/rtspd.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/httpserver.pl: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/tftpserver.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/manpage-scan.pl: Copyright (C) 2016, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/getpart.pm: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/objnames-test10.sh: Copyright (C) 2013 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/serverhelp.pm: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/smbserver.py: Copyright (C) 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/curl_test_data.py: Copyright (C) 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/http2-server.pl: Copyright (C) 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/testcurl.1: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/runtests.pl: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/runtests.1: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/valgrind.pm: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/memanalyze.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1606.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1654.c: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1650.c: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1395.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1397.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/unit/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1305.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1307.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1605.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1303.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1607.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1603.c: Copyright (C) 2015 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1652.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1396.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1394.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1653.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1330.c: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1300.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1399.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1600.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1323.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1304.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1309.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1308.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1621.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1602.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./tests/unit/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1398.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1604.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1601.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1608.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1302.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/curlcheck.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1301.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1609.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1651.c: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/unit/unit1620.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/secureserver.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./tests/rtspserver.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./config.log:Copyright (C) 2017 Free Software Foundation, Inc.
./winbuild/Makefile.vc: Copyright (C) 1999 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./winbuild/MakefileBuild.vc: Copyright (C) 1999 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./winbuild/gen_resp_file.bat: Copyright (C) 2011 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./CMake/CurlTests.c: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./config.status:Copyright (C) 2012 Free Software Foundation, Inc.
./config.status:   Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005,
./config.sub:   Copyright 1992-2018 Free Software Foundation, Inc.
./acinclude.m4: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./libcurl.pc: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./Makefile.in: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./libcurl.pc.in: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./buildconf.bat: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./configure.ac: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./aclocal.m4: Copyright (C) 1996-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2002-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1997-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1999-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1999-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1996-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2003-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1996-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1997-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1999-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 1996-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2009-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2001-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2006-2017 Free Software Foundation, Inc.
./aclocal.m4: Copyright (C) 2004-2017 Free Software Foundation, Inc.
./scripts/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./scripts/Makefile.in: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./scripts/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./scripts/Makefile: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./scripts/updatemanpages.pl: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./scripts/Makefile.am: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./configure: Copyright (C) 1992-1996, 1998-2012 Free Software Foundation, Inc.
./configure: Copyright (c) 1998 - 2019 Daniel Stenberg, <daniel@haxx.se>
./configure:Copyright (C) 2012 Free Software Foundation, Inc.
./configure:Copyright (c) 1998 - 2019 Daniel Stenberg, <daniel@haxx.se>
./configure:Copyright (C) 2012 Free Software Foundation, Inc.
./configure:   Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005,
./packages/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./packages/OS400/os400sys.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/OS400/ccsidcurl.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/OS400/curl.inc.in:      * Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/OS400/os400sys.h: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/OS400/ccsidcurl.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/vms/setup_gnv_curl_build.com:$! Copyright 2009, John Malmberg
./packages/vms/curlmsg.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/vms/build_libcurl_pc.com:$! Copyright 2013, John Malmberg
./packages/vms/curl_crtl_init.c: Copyright 2013, John Malmberg
./packages/vms/build_gnv_curl_pcsi_desc.com:$! Copyright 2009, John Malmberg
./packages/vms/report_openssl_version.c: Copyright 2013, John Malmberg
./packages/vms/curl_startup.com:$! Copyright 2009, John Malmberg
./packages/vms/generate_config_vms_h_curl.com:$! Copyright 2013, John Malmberg
./packages/vms/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./packages/vms/vms_eco_level.h: Copyright 2012, John Malmberg
./packages/vms/gnv_libcurl_symbols.opt:! Copyright 2009, John Malmberg
./packages/vms/make_gnv_curl_install.sh: Copyright 2009, John Malmberg
./packages/vms/config_h.com:$! Copyright 2011, John Malmberg
./packages/vms/backup_gnv_curl_src.com:$! Copyright 2009, John Malmberg
./packages/vms/build_gnv_curl.com:$! Copyright 2009, John Malmberg
./packages/vms/build_gnv_curl_pcsi_text.com:$! Copyright 2009, John Malmberg
./packages/vms/pcsi_gnv_curl_file_list.txt:! Copyright 2009, John Malmberg
./packages/vms/gnv_curl_configure.sh: Copyright 2009, John Malmberg
./packages/vms/generate_vax_transfer.com:$! Copyright 2013, John Malmberg
./packages/vms/build_gnv_curl_release_notes.com:$! Copyright 2009, John Malmberg
./packages/vms/stage_curl_install.com:$! Copyright 2012, John Malmberg
./packages/vms/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./packages/vms/gnv_conftest.c_first: Copyright 2009, John Malmberg
./packages/vms/curl_gnv_build_steps.txt: Copyright 2009, John Malmberg
./packages/vms/make_pcsi_curl_kit_name.com:$! Copyright 2009, John Malmberg
./packages/vms/clean_gnv_curl.com:$! Copyright 2009, John Malmberg
./packages/vms/compare_curl_source.com:$! Copyright 2011, John Malmberg
./packages/vms/curlmsg_vms.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./packages/vms/build_curl-config_script.com:$! Copyright 2014, John Malmberg
./packages/vms/pcsi_product_gnv_curl.com:$! Copyright 2009, John Malmberg
./packages/vms/gnv_link_curl.com:$! Copyright 2009, John Malmberg
./packages/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./src/tool_msgs.c: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_util.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_filetime.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_xattr.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_prg.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_operate.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_helpers.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_prg.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_strdup.c: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_doswin.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_util.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_easysrc.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.Watcom: Copyright (C) 2005 - 2008, Gisle Vanem <gvanem@yahoo.no>.
./src/Makefile.Watcom: Copyright (C) 2005 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_formparse.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_getparam.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_parsecfg.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_rea.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_dbg.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_panykey.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_homedir.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_setopt.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_getpass.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_xattr.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_bname.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_dirhie.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_hdr.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_paramhlp.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_strdup.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_version.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_urlglob.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_binmode.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./src/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/slist_wc.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cfgable.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_homedir.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_panykey.c: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/makefile.dj: Copyright (C) 2003 - 2007, Gisle Vanem <gvanem@yahoo.no>.
./src/makefile.dj: Copyright (C) 2003 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_hdr.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_binmode.c: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/macos/src/macos_main.cpp: Copyright (C) 2001 Eric Lavigne
./src/tool_progress.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_progress.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_helpers.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_metalink.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_libinfo.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cfgable.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_getparam.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_parsecfg.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_bname.c: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_paramhlp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_convert.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_getpass.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_hugehelp.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_operate.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_wrt.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_doswin.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_main.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_vms.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_filetime.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_urlglob.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_help.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/slist_wc.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_setup.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_formparse.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_metalink.h: Copyright (C) 1998 - 2014, 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_rea.c: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.netware: Copyright (C) 2004 - 2014, Guenter Knauf
./src/Makefile.netware: Copyright (C) 2001 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.netware:COPYR   = Copyright (C) $(LIBCURL_COPYRIGHT_STR)
./src/tool_operhlp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./src/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_setopt.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_writeout.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_see.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_see.c: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_dbg.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_easysrc.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_main.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_writeout.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_sdecls.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_convert.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_msgs.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_libinfo.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_help.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/mkhelp.pl: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_sleep.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_cb_wrt.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.m32: Copyright (C) 1999 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_vms.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_sleep.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_dirhie.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/tool_operhlp.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/curl.rc: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./src/curl.rc:      VALUE "LegalCopyright",   "\xa9 " CURL_COPYRIGHT "\0"  /* a9: Copyright symbol */
./docs/mk-ca-bundle.1: Copyright (C) 2008 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/cmdline-opts/page-header: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/cmdline-opts/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/cmdline-opts/Makefile.in: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/cmdline-opts/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/cmdline-opts/Makefile: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/cmdline-opts/Makefile.am: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/parseurl.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpgetresp.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-ssl.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/simplessl.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-authzid.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-multi.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/externalsocket.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/opensslthreadlock.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/getredirect.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/href_extractor.c: Copyright (C) 2012 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-mail.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smooth-gtk-thread.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/postit2.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/version-check.pl: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-examine.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/getinfo.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/anyauthput.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/htmltitle.cpp: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-lsub.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/usercertinmem.c: Copyright (C) 2013 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/rtsp.c: Copyright (c) 2011, Jim Hollinger
./docs/examples/progressfunc.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sftpget.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sendrecv.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-stat.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-noop.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-post.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-tls.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.inc: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/threaded-shared-conn.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-dele.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/synctime.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-tls.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/threaded-ssl.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/getinmemory.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/httpput.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sepheaders.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/shared-connection-cache.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/curlx.c: Copyright (c) 2003 The OpenEvidence Project.  All rights reserved.
./docs/examples/post-callback.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/examples/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-retr.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-ssl.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http2-pushinmemory.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-delete.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/makefile.dj: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpuploadresume.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-authzid.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ghiper.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/cookie_interface.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/postit2-formadd.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/simple.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.example: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http2-upload.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http-post.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/cacertinmem.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/fopen.c: Copyright (c) 2003, 2017 Simtec Electronics
./docs/examples/multithread.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-app.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-mime.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-list.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpuploadfrommem.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/evhiperfifo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-debugcallback.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-multi.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/url2file.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http2-download.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-expn.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/fileupload.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http2-serverpush.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-single.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sftpuploadresume.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftp-wildcard.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-search.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-tls.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/urlapi.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/asiohiper.cpp: Copyright (C) 2012 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-store.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ephiperfifo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-fetch.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.netware:COPYR   = Copyright (C) $(LIBCURL_COPYRIGHT_STR)
./docs/examples/altsvc.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-vrfy.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-uv.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/certinfo.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/examples/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-ssl.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sessioninfo.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpupload.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-create.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/crawler.c: Copyright (C) 2018 Jeroen Ooms <jeroenooms@gmail.com>
./docs/examples/10-at-a-time.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-append.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/persistent.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-noop.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http3-present.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/xmlstream.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/debug.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/hiperfifo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpgetinfo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sampleconv.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-formadd.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/simplepost.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/multi-double.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpget.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/http3.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/htmltidy.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/https.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/imap-copy.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-uidl.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/chkspeed.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/postinmemory.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-top.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.m32: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/resolve.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/ftpsget.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/sslbackend.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/pop3-list.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/httpcustomheader.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-multi.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/smtp-authzid.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/examples/curlgtk.c:  Copyright (c) 2000 David Odin (aka DindinX) for MandrakeSoft
./docs/libcurl/curl_multi_assign.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_share_cleanup.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_global_sslset.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-easy.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-thread.3: Copyright (C) 2015 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_setopt.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_formadd.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_fdset.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_socket_action.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_perform.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_PIPELINING_SITE_BL.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PASSWORD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TFTP_NO_OPTIONS.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_CTX_FUNCTION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_NUM_CONNECTS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TCP_KEEPINTVL.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_LOW_SPEED_LIMIT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TLSAUTH_TYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_KEEP_SENDING_ON_ERROR.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TIMEOUT_MS.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTP200ALIASES.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYAUTH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TCP_NODELAY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ALTSVC.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_EXPECT_100_TIMEOUT_MS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SSL_ENGINES.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_TLS_SESSION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_TLSAUTH_TYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CUSTOMREQUEST.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CERTINFO.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_IOCTLFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_REDIRECT_TIME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONV_FROM_UTF8_FUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_REQUEST_TARGET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONTENT_LENGTH_DOWNLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SOCKS5_AUTH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_INTERFACE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_REDIRECT_TIME_T.3: Copyright (C) 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYPASSWORD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONTENT_LENGTH_UPLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DEFAULT_PROTOCOL.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAXAGE_CONN.3: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_REDIR_PROTOCOLS.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_OS_ERRNO.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_KEYPASSWD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_FILEMETHOD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROGRESSDATA.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_SKIP_PASV_IP.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_SHUFFLE_ADDRESSES.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_SESSIONID_CACHE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NEW_DIRECTORY_PERMS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_CAINFO.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_PUBLIC_KEYFILE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAXCONNECTS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_URL.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_IOCTLDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_CREATE_MISSING_DIRS.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_BUFFERSIZE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_UNIX_SOCKET_PATH.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NOBODY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_XOAUTH2_BEARER.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SEEKDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RTSP_SERVER_CSEQ.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAIL_RCPT.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTPSSLAUTH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DEBUGFUNCTION.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DIRLISTONLY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_CIPHER_LIST.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAXREDIRS.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HEADERFUNCTION.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FNMATCH_FUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_LOCAL_PORT.3: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_COOKIELIST.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONNECTTIMEOUT_MS.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_ACCOUNT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DISALLOW_USERNAME_IN_URL.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_ENABLE_ALPN.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SEEKFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_FALSESTART.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PROXYAUTH_AVAIL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_CLIENT_CSEQ.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_STREAM_URI.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_MAXCONNECTS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TELNETOPTIONS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_KRBLEVEL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SIZE_DOWNLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_INTERLEAVEFUNCTION.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_SOCKETDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HAPROXYPROTOCOL.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COOKIELIST.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PIPEWAIT.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONTENT_TYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ACCEPTTIMEOUT_MS.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_READDATA.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SIZE_UPLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COOKIESESSION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SERVICE_NAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_LOGIN_OPTIONS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_STARTTRANSFER_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_STREAM_WEIGHT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_IPRESOLVE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_TLSAUTH_USERNAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/libcurl/opts/Makefile.in: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_CHUNK_LENGTH_PENALTY_SIZE.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_CONTENT_LENGTH_PENALTY_SIZE.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_CTX_DATA.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_NAMELOOKUP_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONDITION_UNMET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_UPLOAD_BUFFERSIZE.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_USE_GLOBAL_CACHE.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_USE_EPSV.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COOKIE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CLOSESOCKETFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PRIMARY_IP.3: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RESPONSE_CODE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_REDIRECT_URL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_TLSAUTH_PASSWORD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLKEYTYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NETRC_FILE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYUSERNAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FNMATCH_DATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_REQUEST_SIZE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_KEYFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_QUOTE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_WRITEFUNCTION.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POSTQUOTE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_HOST_PUBLIC_KEY_MD5.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TRAILERFUNCTION.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_TIMERFUNCTION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_EGDSOCKET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_KEYDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_INFILESIZE_LARGE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_XFERINFOFUNCTION.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RTSP_CLIENT_CSEQ.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONTENT_LENGTH_UPLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_LOCALPORTRANGE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NETRC.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONNECT_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NOPROXY.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYHEADER.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLVERSION.3: Copyright (C) 1998 - 2015, 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SPEED_DOWNLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_TOTAL_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RANDOM_FILE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_CAPATH.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLCERTTYPE.3: Copyright (C) 1998 - 2015, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_READFUNCTION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_WRITEDATA.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_APPCONNECT_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTPGET.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSL_VERIFYPEER.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROGRESSFUNCTION.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTPPORT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SSL_VERIFYRESULT.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_HTTP_VERSION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_TOTAL_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_KEYPASSWD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_INTERLEAVEDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POSTFIELDS.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_STREAM_DEPENDS_E.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TRAILERDATA.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TCP_KEEPALIVE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TLSAUTH_PASSWORD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_LOW_SPEED_TIME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ISSUERCERT.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYUSERPWD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COPYPOSTFIELDS.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FAILONERROR.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CURLU.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_STARTTRANSFER_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SASL_IR.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTP09_ALLOWED.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAX_SEND_SPEED_LARGE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NOSIGNAL.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PRIVATE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ABSTRACT_UNIX_SOCKET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROTOCOLS.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_FTP_ENTRY_PATH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FORBID_REUSE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SOCKS5_GSSAPI_NEC.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CLOSESOCKETDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONNECT_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PUT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONNECT_ONLY.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CHUNK_END_FUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_COMPRESSION.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CRLFILE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DOH_URL.3: Copyright (C) 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_NAMELOOKUP_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_AUTH_TYPES.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PATH_AS_IS.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_STREAM_DEPENDS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTP_TRANSFER_DECODING.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NEW_FILE_PERMS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_USERNAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_ALTERNATIVE_TO_USER.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONNECTTIMEOUT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RETRY_AFTER.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PROTOCOL.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PREQUOTE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYPORT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTPHEADER.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POSTREDIR.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COOKIEFILE.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAIL_FROM.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_ENABLE_NPN.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SERVICE_NAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PROXY_SSL_VERIFYRESULT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CHUNK_DATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONV_TO_NETWORK_FUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RTSP_SESSION_ID.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_OPENSOCKETDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLCERT.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_INFILESIZE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_SSL_CCC.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FOLLOWLOCATION.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SHARE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_VERIFYPEER.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CAPATH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_PUSHDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_RESPONSE_TIMEOUT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HAPPY_EYEBALLS_TIMEOUT_MS.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RESOLVE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_PUSHFUNCTION.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_ACTIVESOCKET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTP_VERSION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RANGE.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONNECT_TO.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_FILETIME.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CHUNK_BGN_FUNCTION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SPEED_UPLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_APPCONNECT_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTPPOST.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TCP_KEEPIDLE.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_WILDCARDMATCH.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SPEED_UPLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAXFILESIZE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TIMECONDITION.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ACCEPT_ENCODING.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PRIMARY_PORT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ERRORBUFFER.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_UPLOAD.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAX_RECV_SPEED_LARGE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_LOCAL_IP4.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_USE_SSL.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RESOLVER_START_DATA.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TRANSFERTEXT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_EFFECTIVE_URL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSLKEYTYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TCP_FASTOPEN.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_MAX_TOTAL_CONNECTIONS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ALTSVC_CTRL.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_HTTP_CONNECTCODE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_PIPELINING.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/libcurl/opts/Makefile: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RESOLVER_START_FUNCTION.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SPEED_DOWNLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLENGINE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_MAX_PIPELINE_LENGTH.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_LOCAL_IP.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CONV_FROM_NETWORK_FUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTPAUTH.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SUPPRESS_CONNECT_HEADERS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DEBUGDATA.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_VERIFYSTATUS.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TFTP_BLKSIZE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_INTERFACE.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSL_CIPHER_LIST.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_PIPELINING_SERVER_BL.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_UNRESTRICTED_AUTH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TLSAUTH_USERNAME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TRANSFER_ENCODING.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CAINFO.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_HTTPAUTH_AVAIL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_OPTIONS.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HEADEROPT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TLS13_CIPHERS.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SCHEME.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSLCERTTYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_USERAGENT.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_SOCKETFUNCTION.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PRETRANSFER_TIME_T.3: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POSTFIELDSIZE.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_LOCALPORT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLENGINE_DEFAULT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RESUME_FROM_LARGE.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SOCKOPTDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTP_CONTENT_DECODING.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_NOPROGRESS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAXFILESIZE_LARGE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_CRLFILE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_XFERINFODATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_TRANSPORT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_STDERR.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SOCKOPTFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_PINNEDPUBLICKEY.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TIMEVALUE_LARGE.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSLKEY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_SERVERS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_COOKIEJAR.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSLCERT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MIMEPOST.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HTTPPROXYTUNNEL.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CRLF.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_SERVER_CSEQ.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PINNEDPUBLICKEY.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_REDIRECT_COUNT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_APPEND.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_KNOWNHOSTS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HEADERDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POST.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_FILETIME_T.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_CONTENT_LENGTH_DOWNLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_USE_PRET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SOCKS5_GSSAPI_SERVICE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXYTYPE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSH_PRIVATE_KEYFILE.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_TLS13_CIPHERS.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_GSSAPI_DELEGATION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FRESH_CONNECT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_RTSP_CSEQ_RECV.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_POSTFIELDSIZE_LARGE.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TIMEOUT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_HEADER_SIZE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PRE_PROXY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_IGNORE_CONTENT_LENGTH.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_LASTSOCKET.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_REFERER.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/Makefile.am: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_TIMERDATA.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_LOCAL_IP6.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FILETIME.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_HEADER.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SIZE_UPLOAD_T.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_CERTINFO.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSL_OPTIONS.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_MAIL_AUTH.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_OPENSOCKETFUNCTION.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PRETRANSFER_TIME.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_TIMEVALUE.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RESUME_FROM.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_UPKEEP_INTERVAL_MS.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_SESSION_ID.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SASL_AUTHZID.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSLVERSION.3: Copyright (C) 1998 - 2016, 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_VERBOSE.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLMOPT_MAX_HOST_CONNECTIONS.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_ADDRESS_SCOPE.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_SIZE_DOWNLOAD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_RTSP_REQUEST.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PORT.3: Copyright (C) 1998 - 2014, 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_TLS_SSL_PTR.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSLKEY.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLINFO_PRIVATE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_SSL_VERIFYHOST.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_SSL_VERIFYHOST.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_FTP_USE_EPRT.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_AUTOREFERER.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_USERPWD.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_DNS_CACHE_TIMEOUT.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/opts/CURLOPT_PROXY_TRANSFER_MODE.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_duphandle.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-security.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mprintf.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_strerror.3: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_setopt.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl.m4: Copyright (C) 2006, David Shaw <dshaw@jabberwocky.com>
./docs/libcurl/curl_easy_unescape.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-env.3: Copyright (C) 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_global_init.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_add_handle.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_init.3: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_filedata.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/libcurl/Makefile.in: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_upkeep.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-multi.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_cleanup.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_formget.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_version.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_send.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/mksymbolsmanpage.pl: Copyright (C) 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_getinfo.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_formfree.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_timeout.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_type.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_addpart.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_headers.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_version_info.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-share.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_subparts.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/symbols.pl: Copyright (C) 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_free.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_strequal.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_getenv.3: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-tutorial.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_global_init_mem.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_socket.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_escape.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_url_dup.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-symbols.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_recv.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_free.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_init.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_filename.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/libcurl/Makefile: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_getdate.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_url.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_slist_free_all.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_remove_handle.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_data_cb.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_encoder.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_url_get.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_wait.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_info_read.3: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-errors.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_global_cleanup.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_url_set.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_perform.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_multi_poll.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_unescape.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_share_strerror.3: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_slist_append.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_pause.3: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_reset.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_strerror.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_share_init.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_init.3: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_url_cleanup.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_share_setopt.3: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_escape.3: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/Makefile.am: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_data.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_easy_cleanup.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/curl_mime_name.3: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/libcurl/libcurl-url.3: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./docs/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/curl-config.1: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./docs/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./buildconf: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/pingpong.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/escape.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vssh/libssh2.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vssh/libssh.c: Copyright (C) 2017 - 2019 Red Hat, Inc.
./lib/setopt.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/dict.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_setup.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_gethostname.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/mime.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/smb.c: Copyright (C) 2014, Bill Nagel <wnagel@tycoint.com>, Exacq Technologies
./lib/smb.c: Copyright (C) 2016-2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostcheck.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_threads.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/multi.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/mime.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sasl.h: Copyright (C) 2012 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/smtp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/fileinfo.c: Copyright (C) 2010 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_endian.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/setup-vms.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/sha256.c: Copyright (C) 1998 - 2018, Florin Petriuc, <petriuc.florin@gmail.com>
./lib/vquic/ngtcp2.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vquic/quiche.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vquic/ngtcp2.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vquic/quiche.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-win32.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strdup.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/libcurl.rc: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/select.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/checksrc.pl: Copyright (C) 2011 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/telnet.h: Copyright (C) 1998 - 2007, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sspi.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/if2ip.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/asyn.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_ntlm.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_setup_once.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-os400.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/getinfo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/speedcheck.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/llist.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/timeval.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/sigpipe.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.Watcom: Copyright (C) 2005 - 2009, Gisle Vanem <gvanem@yahoo.no>.
./lib/Makefile.Watcom: Copyright (C) 2005 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_chunks.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/select.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ldap.h: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/rtsp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/gopher.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_des.h: Copyright (C) 2015, Steve Holme, <steve_holme@hotmail.com>.
./lib/curl_range.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ntlm_core.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/altsvc.h: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/rtsp.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/setup-os400.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.inc: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/smtp.h: Copyright (C) 2009 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/speedcheck.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/md5.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/md5.c: Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
./lib/config-tpf.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostip6.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strtoofft.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/rand.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/system_win32.h: Copyright (C) 2016 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/ftp.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/multihandle.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ntlm_wb.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/asyn-ares.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostasyn.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/url.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/mprintf.c: Copyright (C) 1999 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/sendf.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/timeval.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sha256.h: Copyright (C) 1998 - 2010, Florin Petriuc, <petriuc.florin@gmail.com>
./lib/http_negotiate.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_memrchr.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-plan9.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_ntlm.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/nonblock.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hmac.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostip4.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./lib/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/conncache.h: Copyright (C) 2015 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/conncache.h: Copyright (C) 2012 - 2014, Linus Nielsen Feltzing, <linus@haxx.se>
./lib/amigaos.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_gethostname.h: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strtoofft.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_md4.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/psl.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/socks_sspi.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/socks_sspi.c: Copyright (C) 2009, 2011, Markus Moeller, <markus_moeller@compuserve.com>
./lib/setopt.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/makefile.dj: Copyright (C) 2003 - 2008, Gisle Vanem <gvanem@yahoo.no>.
./lib/makefile.dj: Copyright (C) 2003 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/nwlib.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/transfer.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_negotiate.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/connect.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/idn_win32.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_gssapi.h: Copyright (C) 2011 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/progress.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/if2ip.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_chunks.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/slist.h: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_addrinfo.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sec.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-dos.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/arpa_telnet.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-vxworks.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/system_win32.c: Copyright (C) 2016 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/security.c: Copyright (c) 1998, 1999, 2017 Kungliga Tekniska Högskolan
./lib/security.c: Copyright (C) 2001 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/cookie.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_fnmatch.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/formdata.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/x509asn1.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/file.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/netrc.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http2.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_multibyte.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_base64.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/telnet.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/transfer.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_path.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/formdata.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/quic.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/imap.h: Copyright (C) 2009 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strerror.c: Copyright (C) 2004 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/netrc.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_memrchr.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/mk-ca-bundle.pl: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ctype.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ntlm_wb.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/cookie.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/urlapi-int.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/url.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/ldap.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_proxy.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/imap.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostip.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_des.c: Copyright (C) 2015, Steve Holme, <steve_holme@hotmail.com>.
./lib/tftp.h: Copyright (C) 1998 - 2007, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/doh.h: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/smb.h: Copyright (C) 2014, Bill Nagel <wnagel@tycoint.com>, Exacq Technologies
./lib/smb.h: Copyright (C) 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/socks.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/fileinfo.h: Copyright (C) 2010 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/ftplistparser.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/llist.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/non-ascii.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hash.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_rtmp.h: Copyright (C) 2010, Howard Chu, <hyc@highlandsun.com>
./lib/share.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/nwos.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/dotdot.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/memdebug.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strcase.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/inet_pton.c:/* Copyright (c) 1996 by Internet Software Consortium.
./lib/pingpong.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_threads.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/wildcard.h: Copyright (C) 2010 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/ftplistparser.h: Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ctype.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/file.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/urlapi.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_hmac.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/slist.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/inet_ntop.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sasl.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strtok.c: Copyright (C) 1998 - 2007, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/memdebug.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/doh.c: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_sspi.h: Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/warnless.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/splay.h: Copyright (C) 1997 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_proxy.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/md4.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/md4.c: domain is deemed null and void, then the software is Copyright (c) 2001
./lib/connect.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_addrinfo.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_ntlm_core.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-riscos.h: Copyright (C) 1998 - 2013, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/firefox-db2pem.sh: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/easy.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/base64.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.netware: Copyright (C) 2004 - 2015, Guenter Knauf
./lib/Makefile.netware: Copyright (C) 2001 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.netware:COPYR   = Copyright (C) $(LIBCURL_COPYRIGHT_STR)
./lib/splay.c: Copyright (C) 1997 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/altsvc.c: Copyright (C) 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/socks_gssapi.c: Copyright (C) 2009, Markus Moeller, <markus_moeller@compuserve.com>
./lib/socks_gssapi.c: Copyright (C) 2012 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/nonblock.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/warnless.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_endian.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./lib/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-amigaos.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/dotdot.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http2.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostsyn.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/content_encoding.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/getenv.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/dict.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strtok.h: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/gopher.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_range.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/version.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strcase.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/easyif.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_fnmatch.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/amigaos.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/urldata.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_get_line.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostip.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/rand.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/x509asn1.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_digest.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_gssapi.c: Copyright (C) 2011 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_multibyte.c: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/pop3.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/ssh.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/openldap.c: Copyright (C) 2010, Howard Chu, <hyc@openldap.org>
./lib/openldap.c: Copyright (C) 2011 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/progress.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/digest_sspi.c: Copyright (C) 2014 - 2016, Steve Holme, <steve_holme@hotmail.com>.
./lib/vauth/digest_sspi.c: Copyright (C) 2015 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/ntlm.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/ntlm.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/spnego_gssapi.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/spnego_sspi.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/krb5_gssapi.c: Copyright (C) 2014 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/vauth/krb5_gssapi.c: Copyright (C) 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/ntlm_sspi.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/krb5_sspi.c: Copyright (C) 2014 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/vauth/cleartext.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/vauth.h: Copyright (C) 2014 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/vauth/vauth.c: Copyright (C) 2014 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./lib/vauth/digest.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/cram.c: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/oauth2.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vauth/digest.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/escape.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curlx.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/non-ascii.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_path.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_path.c: Copyright (c) 2001-2004 Damien Miller <djm@openbsd.org>
./lib/config-win32ce.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/tftp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/sockaddr.h: Copyright (C) 1998 - 2009, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/inet_ntop.c: Copyright (C) 1996-2001  Internet Software Consortium.
./lib/http.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-symbian.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/conncache.c: Copyright (C) 2012 - 2016, Linus Nielsen Feltzing, <linus@haxx.se>
./lib/conncache.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_get_line.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/wildcard.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/socks.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strerror.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hash.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.m32: Copyright (C) 1999 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/inet_pton.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/getinfo.h: Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl.h: Copyright (C) 2012 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl.h: Copyright (C) 2010, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/sectransp.h: Copyright (C) 2012 - 2014, Nick Zitzmann, <nickzman@gmail.com>.
./lib/vtls/sectransp.h: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/schannel_verify.c: Copyright (C) 2012 - 2016, Marc Hoersken, <info@marc-hoersken.de>
./lib/vtls/schannel_verify.c: Copyright (C) 2012, Mark Salisbury, <mark.salisbury@hp.com>
./lib/vtls/schannel_verify.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/nss.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl.c: Copyright (C) 2010 - 2011, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/mesalink.h: Copyright (C) 2017-2018, Yiming Jing, <jingyiming@baidu.com>
./lib/vtls/mesalink.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/vtls.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/gtls.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl_threadlock.c: Copyright (C) 2013-2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl_threadlock.c: Copyright (C) 2010, 2011, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/schannel.h: Copyright (C) 2012, Marc Hoersken, <info@marc-hoersken.de>, et al.
./lib/vtls/schannel.h: Copyright (C) 2012 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/gtls.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/vtls.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/nssg.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/mbedtls.c: Copyright (C) 2010 - 2011, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/mbedtls.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/gskit.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/openssl.h: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/sectransp.c: Copyright (C) 2012 - 2017, Nick Zitzmann, <nickzman@gmail.com>.
./lib/vtls/sectransp.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/gskit.h: Copyright (C) 1998 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/wolfssl.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/schannel.c: Copyright (C) 2012 - 2016, Marc Hoersken, <info@marc-hoersken.de>
./lib/vtls/schannel.c: Copyright (C) 2012, Mark Salisbury, <mark.salisbury@hp.com>
./lib/vtls/schannel.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/schannel.c:   Copyright (C) 2010, 2011, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/schannel.c:   Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl_threadlock.h: Copyright (C) 2013-2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/polarssl_threadlock.h: Copyright (C) 2010, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/vtls/mesalink.c: Copyright (C) 2017 - 2018, Yiming Jing, <jingyiming@baidu.com>
./lib/vtls/mesalink.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/mesalink.c:   Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/openssl.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/wolfssl.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/mbedtls.h: Copyright (C) 2012 - 2016, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/vtls/mbedtls.h: Copyright (C) 2010, Hoi-Ho Chan, <hoiho.chan@gmail.com>
./lib/sendf.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/ftp.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_memory.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/config-mac.h: Copyright (C) 1998 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/pop3.h: Copyright (C) 2009 - 2015, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_printf.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/share.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_md5.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/http_digest.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/asyn-thread.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/parsedate.h: Copyright (C) 1998 - 2011, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/hostcheck.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/strdup.c: Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/krb5.c: Copyright (c) 1995, 1996, 1997, 1998, 1999 Kungliga Tekniska Högskolan
./lib/krb5.c: Copyright (c) 2004 - 2017 Daniel Stenberg
./lib/curl_rtmp.c: Copyright (C) 2012 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/curl_rtmp.c: Copyright (C) 2010, Howard Chu, <hyc@highlandsun.com>
./lib/multiif.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/content_encoding.c: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/parsedate.c: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/psl.h: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./lib/mk-ca-bundle.vbs:'* Copyright (C) 1998 - 2014, Daniel Stenberg, <daniel@haxx.se>, et al.
./README:  Curl contains pieces of source code that is Copyright (c) 1998, 1999
./libtool:   Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005,
./libtool: Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2003, 2004, 2005, 2006,
./curl-config.in: Copyright (C) 2001 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./Makefile: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/mkfile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/src/mkfile.inc: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/src/mkfile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/mkfile.proto: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/lib/mkfile.inc: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/lib/mkfile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./plan9/include/mkfile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./curl-config: Copyright (C) 2001 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./projects/wolfssl_options.h: Copyright (C) 2006-2015 wolfSSL Inc.
./projects/build-openssl.bat: Copyright (C) 2012 - 2019, Steve Holme, <steve_holme@hotmail.com>.
./projects/build-wolfssl.bat: Copyright (C) 2012 - 2018, Steve Holme, <steve_holme@hotmail.com>.
./projects/build-wolfssl.bat: Copyright (C) 2015, Jay Satiro, <raysatiro@yahoo.com>.
./projects/checksrc.bat: Copyright (C) 2014 - 2016, Steve Holme, <steve_holme@hotmail.com>.
./projects/generate.bat: Copyright (C) 2014 - 2017, Steve Holme, <steve_holme@hotmail.com>.
./CMakeLists.txt: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./Makefile.am: Copyright (C) 1998 - 2018, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./include/curl/curl.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/system.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/Makefile.in: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./include/curl/Makefile.in: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/multi.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/easy.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/urlapi.h: Copyright (C) 2018 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/stdcheaders.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/curlver.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/mprintf.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/typecheck-gcc.h: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./include/curl/Makefile: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/curl/Makefile.am: Copyright (C) 1998 - 2019, Daniel Stenberg, <daniel@haxx.se>, et al.
./include/Makefile: Copyright (C) 1994-2018 Free Software Foundation, Inc.
./config.guess: Copyright 1992-2018 Free Software Foundation, Inc.
```

## libubox

License text in the source files:

### avl.c, avl.h

```
 * PacketBB handler library (see RFC 5444)
 * Copyright (c) 2010 Henning Rogge <hrogge@googlemail.com>
 * Original OLSRd implementation by Hannes Gredler <hannes@gredler.at>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of olsr.org, olsrd nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Visit http://www.olsr.org/git for more information.
 *
 * If you find this software useful feel free to make a donation
 * to the project. For more information see the website or contact
 * the copyright holders.
```

### base64.c

```
 * base64 - libubox base64 functions
 *
 * Copyright (C) 2015 Felix Fietkau <nbd@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

 * Copyright (c) 1996 by Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.

 * Portions Copyright (c) 1995 by International Business Machines, Inc.
 *
 * International Business Machines, Inc. (hereinafter called IBM) grants
 * permission under its copyrights to use, copy, modify, and distribute this
 * Software with or without fee, provided that the above copyright notice and
 * all paragraphs of this notice appear in all copies, and that the name of IBM
 * not be used in connection with the marketing of any product incorporating
 * the Software or modifications thereof, without specific, written prior
 * permission.
 *
 * To the extent it has a right to do so, IBM grants an immunity from suit
 * under its patents, if any, for the use, sale or manufacture of products to
 * the extent that such products are used for performing Domain Name System
 * dynamic updates in TCP/IP networks by means of the Software.  No immunity is
 * granted for any product per se or for any other function of any product.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", AND IBM DISCLAIMS ALL WARRANTIES,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE.  IN NO EVENT SHALL IBM BE LIABLE FOR ANY SPECIAL,
 * DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE, EVEN
 * IF IBM IS APPRISED OF THE POSSIBILITY OF SUCH DAMAGES.
```

### list.h

```
 * Copyright (c) 2011 Felix Fietkau <nbd@openwrt.org>
 * Copyright (c) 2010 Isilon Systems, Inc.
 * Copyright (c) 2010 iX Systems, Inc.
 * Copyright (c) 2010 Panasas, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

### md5.c, md5.h

```
 * Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

 * This is an OpenSSL-compatible implementation of the RSA Data Security, Inc.
 * MD5 Message-Digest Algorithm (RFC 1321).
 *
 * Homepage:
 * http://openwall.info/wiki/people/solar/software/public-domain-source-code/md5
 *
 * Author:
 * Alexander Peslyak, better known as Solar Designer <solar at openwall.com>
 *
 * This software was written by Alexander Peslyak in 2001.  No copyright is
 * claimed, and the software is hereby placed in the public domain.
 * In case this attempt to disclaim copyright and place the software in the
 * public domain is deemed null and void, then the software is
 * Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
 * general public under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 *
 * (This is a heavily cut-down "BSD license".)
```

### ulog.c, ulog.h

```
 * Copyright (C) 2015 Jo-Philipp Wich <jow@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
```

### usock.c, usock.h

```
 * Copyright (C) 2010 Steven Barth <steven@midlink.org>
 * Copyright (C) 2011-2012 Felix Fietkau <nbd@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
```

### Other sources

```
 * Copyright (C) 2010-2016 Felix Fietkau <nbd@openwrt.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
```

Copyright headers from the source files:

```
- list.h: Copyright (c) 2011 Felix Fietkau <nbd@openwrt.org>
- list.h: Copyright (c) 2010 Isilon Systems, Inc.
- list.h: Copyright (c) 2010 iX Systems, Inc.
- list.h: Copyright (c) 2010 Panasas, Inc.
- uloop.c: Copyright (C) 2010-2016 Felix Fietkau <nbd@openwrt.org>
- blob.c: Copyright (C) 2010 Felix Fietkau <nbd@openwrt.org>
- usock.c: Copyright (C) 2010 Steven Barth <steven@midlink.org>
- usock.c: Copyright (C) 2011-2012 Felix Fietkau <nbd@openwrt.org>
- utils.c: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- tests/test-runqueue.c: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- tests/test-blob-parse.c:  Copyright (C) 2018 Daniel Golle <daniel@makrotopia.org>
- blobmsg.c: Copyright (C) 2010-2012 Felix Fietkau <nbd@openwrt.org>
- vlist.h: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- md5.c: Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
- md5.c: Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
- kvlist.c: Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
- ulog.c: Copyright (C) 2015 Jo-Philipp Wich <jow@openwrt.org>
- runqueue.h: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- blobmsg_json.h: Copyright (C) 2010-2012 Felix Fietkau <nbd@openwrt.org>
- ustream.c: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- lua/uloop.c: Copyright (C) 2012 John Crispin <blogic@openwrt.org>
- avl-cmp.c: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- uloop-kqueue.c: Copyright (C) 2010-2016 Felix Fietkau <nbd@openwrt.org>
- uloop.h: Copyright (C) 2010-2013 Felix Fietkau <nbd@openwrt.org>
- safe_list.c: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- runqueue.c: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- usock.h: Copyright (C) 2010 Steven Barth <steven@midlink.org>
- usock.h: Copyright (C) 2011-2012 Felix Fietkau <nbd@openwrt.org>
- jshn.c: Copyright (C) 2011-2013 Felix Fietkau <nbd@openwrt.org>
- safe_list.h: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- ustream.h: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- examples/shunit2: Copyright 2008 Kate Ward. All Rights Reserved.
- vlist.c: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- avl-cmp.h: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- blobmsg_json.c: Copyright (C) 2010-2012 Felix Fietkau <nbd@openwrt.org>
- json_script.c: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- json_script.h: Copyright (C) 2013 Felix Fietkau <nbd@openwrt.org>
- uloop-epoll.c: Copyright (C) 2010-2016 Felix Fietkau <nbd@openwrt.org>
- base64.c: Copyright (C) 2015 Felix Fietkau <nbd@openwrt.org>
- base64.c: Copyright (c) 1996 by Internet Software Consortium.
- base64.c: Portions Copyright (c) 1995 by International Business Machines, Inc.
- ustream-fd.c: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
- avl.c: Copyright (c) 2010 Henning Rogge <hrogge@googlemail.com>
- blob.h: Copyright (C) 2010 Felix Fietkau <nbd@openwrt.org>
- md5.h: Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
- md5.h: Copyright (c) 2001 Alexander Peslyak and it is hereby released to the
- avl.h: Copyright (c) 2010 Henning Rogge <hrogge@googlemail.com>
- blobmsg.h: Copyright (C) 2010-2012 Felix Fietkau <nbd@openwrt.org>
- ulog.h: Copyright (C) 2015 Jo-Philipp Wich <jow@openwrt.org>
- kvlist.h: Copyright (C) 2014 Felix Fietkau <nbd@openwrt.org>
- utils.h: Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
```

## uci

License text in the source files:

### cli.c, lua/uci.c

```
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
```

### Other source files

```
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License version 2.1
as published by the Free Software Foundation

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
```

Copyright headers from the source files:

```
- ucimap.c: Copyright (C) 2008-2009 Felix Fietkau <nbd@openwrt.org>
- ucimap.h: Copyright (C) 2008-2009 Felix Fietkau <nbd@openwrt.org>
- uci_blob.h: Copyright (C) 2012-2013 Felix Fietkau <nbd@openwrt.org>
- blob.c: Copyright (C) 2012-2013 Felix Fietkau <nbd@openwrt.org>
- cli.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- libuci.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- parse.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- list.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- lua/uci.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- sh/uci.sh: Copyright (C) 2006 Fokus Fraunhofer <carsten.tittel@fokus.fraunhofer.de>
- sh/uci.sh: Copyright (C) 2006-2008 OpenWrt.org
- util.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- uci_internal.h: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- delta.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- file.c: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
- uci.h: Copyright (C) 2008 Felix Fietkau <nbd@openwrt.org>
```

The GNU General Public License and Lesser General Public License mentionen
were not included in the package.

Here is the GNU General Public License version 2 from https://www.gnu.org/licenses/old-licenses/gpl-2.0.txt :

```
                    GNU GENERAL PUBLIC LICENSE
                       Version 2, June 1991

 Copyright (C) 1989, 1991 Free Software Foundation, Inc.,
 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
License is intended to guarantee your freedom to share and change free
software--to make sure the software is free for all its users.  This
General Public License applies to most of the Free Software
Foundation's software and to any other program whose authors commit to
using it.  (Some other Free Software Foundation software is covered by
the GNU Lesser General Public License instead.)  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
this service if you wish), that you receive source code or can get it
if you want it, that you can change the software or use pieces of it
in new free programs; and that you know you can do these things.

  To protect your rights, we need to make restrictions that forbid
anyone to deny you these rights or to ask you to surrender the rights.
These restrictions translate to certain responsibilities for you if you
distribute copies of the software, or if you modify it.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must give the recipients all the rights that
you have.  You must make sure that they, too, receive or can get the
source code.  And you must show them these terms so they know their
rights.

  We protect your rights with two steps: (1) copyright the software, and
(2) offer you this license which gives you legal permission to copy,
distribute and/or modify the software.

  Also, for each author's protection and ours, we want to make certain
that everyone understands that there is no warranty for this free
software.  If the software is modified by someone else and passed on, we
want its recipients to know that what they have is not the original, so
that any problems introduced by others will not reflect on the original
authors' reputations.

  Finally, any free program is threatened constantly by software
patents.  We wish to avoid the danger that redistributors of a free
program will individually obtain patent licenses, in effect making the
program proprietary.  To prevent this, we have made it clear that any
patent must be licensed for everyone's free use or not licensed at all.

  The precise terms and conditions for copying, distribution and
modification follow.

                    GNU GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License applies to any program or other work which contains
a notice placed by the copyright holder saying it may be distributed
under the terms of this General Public License.  The "Program", below,
refers to any such program or work, and a "work based on the Program"
means either the Program or any derivative work under copyright law:
that is to say, a work containing the Program or a portion of it,
either verbatim or with modifications and/or translated into another
language.  (Hereinafter, translation is included without limitation in
the term "modification".)  Each licensee is addressed as "you".

Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running the Program is not restricted, and the output from the Program
is covered only if its contents constitute a work based on the
Program (independent of having been made by running the Program).
Whether that is true depends on what the Program does.

  1. You may copy and distribute verbatim copies of the Program's
source code as you receive it, in any medium, provided that you
conspicuously and appropriately publish on each copy an appropriate
copyright notice and disclaimer of warranty; keep intact all the
notices that refer to this License and to the absence of any warranty;
and give any other recipients of the Program a copy of this License
along with the Program.

You may charge a fee for the physical act of transferring a copy, and
you may at your option offer warranty protection in exchange for a fee.

  2. You may modify your copy or copies of the Program or any portion
of it, thus forming a work based on the Program, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) You must cause the modified files to carry prominent notices
    stating that you changed the files and the date of any change.

    b) You must cause any work that you distribute or publish, that in
    whole or in part contains or is derived from the Program or any
    part thereof, to be licensed as a whole at no charge to all third
    parties under the terms of this License.

    c) If the modified program normally reads commands interactively
    when run, you must cause it, when started running for such
    interactive use in the most ordinary way, to print or display an
    announcement including an appropriate copyright notice and a
    notice that there is no warranty (or else, saying that you provide
    a warranty) and that users may redistribute the program under
    these conditions, and telling the user how to view a copy of this
    License.  (Exception: if the Program itself is interactive but
    does not normally print such an announcement, your work based on
    the Program is not required to print an announcement.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Program,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Program, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Program.

In addition, mere aggregation of another work not based on the Program
with the Program (or with a work based on the Program) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may copy and distribute the Program (or a work based on it,
under Section 2) in object code or executable form under the terms of
Sections 1 and 2 above provided that you also do one of the following:

    a) Accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of Sections
    1 and 2 above on a medium customarily used for software interchange; or,

    b) Accompany it with a written offer, valid for at least three
    years, to give any third party, for a charge no more than your
    cost of physically performing source distribution, a complete
    machine-readable copy of the corresponding source code, to be
    distributed under the terms of Sections 1 and 2 above on a medium
    customarily used for software interchange; or,

    c) Accompany it with the information you received as to the offer
    to distribute corresponding source code.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form with such
    an offer, in accord with Subsection b above.)

The source code for a work means the preferred form of the work for
making modifications to it.  For an executable work, complete source
code means all the source code for all modules it contains, plus any
associated interface definition files, plus the scripts used to
control compilation and installation of the executable.  However, as a
special exception, the source code distributed need not include
anything that is normally distributed (in either source or binary
form) with the major components (compiler, kernel, and so on) of the
operating system on which the executable runs, unless that component
itself accompanies the executable.

If distribution of executable or object code is made by offering
access to copy from a designated place, then offering equivalent
access to copy the source code from the same place counts as
distribution of the source code, even though third parties are not
compelled to copy the source along with the object code.

  4. You may not copy, modify, sublicense, or distribute the Program
except as expressly provided under this License.  Any attempt
otherwise to copy, modify, sublicense or distribute the Program is
void, and will automatically terminate your rights under this License.
However, parties who have received copies, or rights, from you under
this License will not have their licenses terminated so long as such
parties remain in full compliance.

  5. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Program or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Program (or any work based on the
Program), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Program or works based on it.

  6. Each time you redistribute the Program (or any work based on the
Program), the recipient automatically receives a license from the
original licensor to copy, distribute or modify the Program subject to
these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties to
this License.

  7. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Program at all.  For example, if a patent
license would not permit royalty-free redistribution of the Program by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Program.

If any portion of this section is held invalid or unenforceable under
any particular circumstance, the balance of the section is intended to
apply and the section as a whole is intended to apply in other
circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system, which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  8. If the distribution and/or use of the Program is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Program under this License
may add an explicit geographical distribution limitation excluding
those countries, so that distribution is permitted only in or among
countries not thus excluded.  In such case, this License incorporates
the limitation as if written in the body of this License.

  9. The Free Software Foundation may publish revised and/or new versions
of the General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

Each version is given a distinguishing version number.  If the Program
specifies a version number of this License which applies to it and "any
later version", you have the option of following the terms and conditions
either of that version or of any later version published by the Free
Software Foundation.  If the Program does not specify a version number of
this License, you may choose any version ever published by the Free Software
Foundation.

  10. If you wish to incorporate parts of the Program into other free
programs whose distribution conditions are different, write to the author
to ask for permission.  For software which is copyrighted by the Free
Software Foundation, write to the Free Software Foundation; we sometimes
make exceptions for this.  Our decision will be guided by the two goals
of preserving the free status of all derivatives of our free software and
of promoting the sharing and reuse of software generally.

                            NO WARRANTY

  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY
FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN
OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES
PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS
TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE
PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,
REPAIR OR CORRECTION.

  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR
REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,
INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED
TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY
YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER
PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGES.

                     END OF TERMS AND CONDITIONS

            How to Apply These Terms to Your New Programs

  If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these terms.

  To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
convey the exclusion of warranty; and each file should have at least
the "copyright" line and a pointer to where the full notice is found.

    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

Also add information on how to contact you by electronic and paper mail.

If the program is interactive, make it output a short notice like this
when it starts in an interactive mode:

    Gnomovision version 69, Copyright (C) year name of author
    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.

The hypothetical commands `show w' and `show c' should show the appropriate
parts of the General Public License.  Of course, the commands you use may
be called something other than `show w' and `show c'; they could even be
mouse-clicks or menu items--whatever suits your program.

You should also get your employer (if you work as a programmer) or your
school, if any, to sign a "copyright disclaimer" for the program, if
necessary.  Here is a sample; alter the names:

  Yoyodyne, Inc., hereby disclaims all copyright interest in the program
  `Gnomovision' (which makes passes at compilers) written by James Hacker.

  <signature of Ty Coon>, 1 April 1989
  Ty Coon, President of Vice

This General Public License does not permit incorporating your program into
proprietary programs.  If your program is a subroutine library, you may
consider it more useful to permit linking proprietary applications with the
library.  If this is what you want to do, use the GNU Lesser General
Public License instead of this License.

```

Here is the GNU Lesser General Public License version 2.1 from https://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt :

```
                  GNU LESSER GENERAL PUBLIC LICENSE
                       Version 2.1, February 1999

 Copyright (C) 1991, 1999 Free Software Foundation, Inc.
 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

[This is the first released version of the Lesser GPL.  It also counts
 as the successor of the GNU Library Public License, version 2, hence
 the version number 2.1.]

                            Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
Licenses are intended to guarantee your freedom to share and change
free software--to make sure the software is free for all its users.

  This license, the Lesser General Public License, applies to some
specially designated software packages--typically libraries--of the
Free Software Foundation and other authors who decide to use it.  You
can use it too, but we suggest you first think carefully about whether
this license or the ordinary General Public License is the better
strategy to use in any particular case, based on the explanations below.

  When we speak of free software, we are referring to freedom of use,
not price.  Our General Public Licenses are designed to make sure that
you have the freedom to distribute copies of free software (and charge
for this service if you wish); that you receive source code or can get
it if you want it; that you can change the software and use pieces of
it in new free programs; and that you are informed that you can do
these things.

  To protect your rights, we need to make restrictions that forbid
distributors to deny you these rights or to ask you to surrender these
rights.  These restrictions translate to certain responsibilities for
you if you distribute copies of the library or if you modify it.

  For example, if you distribute copies of the library, whether gratis
or for a fee, you must give the recipients all the rights that we gave
you.  You must make sure that they, too, receive or can get the source
code.  If you link other code with the library, you must provide
complete object files to the recipients, so that they can relink them
with the library after making changes to the library and recompiling
it.  And you must show them these terms so they know their rights.

  We protect your rights with a two-step method: (1) we copyright the
library, and (2) we offer you this license, which gives you legal
permission to copy, distribute and/or modify the library.

  To protect each distributor, we want to make it very clear that
there is no warranty for the free library.  Also, if the library is
modified by someone else and passed on, the recipients should know
that what they have is not the original version, so that the original
author's reputation will not be affected by problems that might be
introduced by others.

  Finally, software patents pose a constant threat to the existence of
any free program.  We wish to make sure that a company cannot
effectively restrict the users of a free program by obtaining a
restrictive license from a patent holder.  Therefore, we insist that
any patent license obtained for a version of the library must be
consistent with the full freedom of use specified in this license.

  Most GNU software, including some libraries, is covered by the
ordinary GNU General Public License.  This license, the GNU Lesser
General Public License, applies to certain designated libraries, and
is quite different from the ordinary General Public License.  We use
this license for certain libraries in order to permit linking those
libraries into non-free programs.

  When a program is linked with a library, whether statically or using
a shared library, the combination of the two is legally speaking a
combined work, a derivative of the original library.  The ordinary
General Public License therefore permits such linking only if the
entire combination fits its criteria of freedom.  The Lesser General
Public License permits more lax criteria for linking other code with
the library.

  We call this license the "Lesser" General Public License because it
does Less to protect the user's freedom than the ordinary General
Public License.  It also provides other free software developers Less
of an advantage over competing non-free programs.  These disadvantages
are the reason we use the ordinary General Public License for many
libraries.  However, the Lesser license provides advantages in certain
special circumstances.

  For example, on rare occasions, there may be a special need to
encourage the widest possible use of a certain library, so that it becomes
a de-facto standard.  To achieve this, non-free programs must be
allowed to use the library.  A more frequent case is that a free
library does the same job as widely used non-free libraries.  In this
case, there is little to gain by limiting the free library to free
software only, so we use the Lesser General Public License.

  In other cases, permission to use a particular library in non-free
programs enables a greater number of people to use a large body of
free software.  For example, permission to use the GNU C Library in
non-free programs enables many more people to use the whole GNU
operating system, as well as its variant, the GNU/Linux operating
system.

  Although the Lesser General Public License is Less protective of the
users' freedom, it does ensure that the user of a program that is
linked with the Library has the freedom and the wherewithal to run
that program using a modified version of the Library.

  The precise terms and conditions for copying, distribution and
modification follow.  Pay close attention to the difference between a
"work based on the library" and a "work that uses the library".  The
former contains code derived from the library, whereas the latter must
be combined with the library in order to run.

                  GNU LESSER GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License Agreement applies to any software library or other
program which contains a notice placed by the copyright holder or
other authorized party saying it may be distributed under the terms of
this Lesser General Public License (also called "this License").
Each licensee is addressed as "you".

  A "library" means a collection of software functions and/or data
prepared so as to be conveniently linked with application programs
(which use some of those functions and data) to form executables.

  The "Library", below, refers to any such software library or work
which has been distributed under these terms.  A "work based on the
Library" means either the Library or any derivative work under
copyright law: that is to say, a work containing the Library or a
portion of it, either verbatim or with modifications and/or translated
straightforwardly into another language.  (Hereinafter, translation is
included without limitation in the term "modification".)

  "Source code" for a work means the preferred form of the work for
making modifications to it.  For a library, complete source code means
all the source code for all modules it contains, plus any associated
interface definition files, plus the scripts used to control compilation
and installation of the library.

  Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running a program using the Library is not restricted, and output from
such a program is covered only if its contents constitute a work based
on the Library (independent of the use of the Library in a tool for
writing it).  Whether that is true depends on what the Library does
and what the program that uses the Library does.

  1. You may copy and distribute verbatim copies of the Library's
complete source code as you receive it, in any medium, provided that
you conspicuously and appropriately publish on each copy an
appropriate copyright notice and disclaimer of warranty; keep intact
all the notices that refer to this License and to the absence of any
warranty; and distribute a copy of this License along with the
Library.

  You may charge a fee for the physical act of transferring a copy,
and you may at your option offer warranty protection in exchange for a
fee.

  2. You may modify your copy or copies of the Library or any portion
of it, thus forming a work based on the Library, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) The modified work must itself be a software library.

    b) You must cause the files modified to carry prominent notices
    stating that you changed the files and the date of any change.

    c) You must cause the whole of the work to be licensed at no
    charge to all third parties under the terms of this License.

    d) If a facility in the modified Library refers to a function or a
    table of data to be supplied by an application program that uses
    the facility, other than as an argument passed when the facility
    is invoked, then you must make a good faith effort to ensure that,
    in the event an application does not supply such function or
    table, the facility still operates, and performs whatever part of
    its purpose remains meaningful.

    (For example, a function in a library to compute square roots has
    a purpose that is entirely well-defined independent of the
    application.  Therefore, Subsection 2d requires that any
    application-supplied function or table used by this function must
    be optional: if the application does not supply it, the square
    root function must still compute square roots.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Library,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Library, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote
it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Library.

In addition, mere aggregation of another work not based on the Library
with the Library (or with a work based on the Library) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may opt to apply the terms of the ordinary GNU General Public
License instead of this License to a given copy of the Library.  To do
this, you must alter all the notices that refer to this License, so
that they refer to the ordinary GNU General Public License, version 2,
instead of to this License.  (If a newer version than version 2 of the
ordinary GNU General Public License has appeared, then you can specify
that version instead if you wish.)  Do not make any other change in
these notices.

  Once this change is made in a given copy, it is irreversible for
that copy, so the ordinary GNU General Public License applies to all
subsequent copies and derivative works made from that copy.

  This option is useful when you wish to copy part of the code of
the Library into a program that is not a library.

  4. You may copy and distribute the Library (or a portion or
derivative of it, under Section 2) in object code or executable form
under the terms of Sections 1 and 2 above provided that you accompany
it with the complete corresponding machine-readable source code, which
must be distributed under the terms of Sections 1 and 2 above on a
medium customarily used for software interchange.

  If distribution of object code is made by offering access to copy
from a designated place, then offering equivalent access to copy the
source code from the same place satisfies the requirement to
distribute the source code, even though third parties are not
compelled to copy the source along with the object code.

  5. A program that contains no derivative of any portion of the
Library, but is designed to work with the Library by being compiled or
linked with it, is called a "work that uses the Library".  Such a
work, in isolation, is not a derivative work of the Library, and
therefore falls outside the scope of this License.

  However, linking a "work that uses the Library" with the Library
creates an executable that is a derivative of the Library (because it
contains portions of the Library), rather than a "work that uses the
library".  The executable is therefore covered by this License.
Section 6 states terms for distribution of such executables.

  When a "work that uses the Library" uses material from a header file
that is part of the Library, the object code for the work may be a
derivative work of the Library even though the source code is not.
Whether this is true is especially significant if the work can be
linked without the Library, or if the work is itself a library.  The
threshold for this to be true is not precisely defined by law.

  If such an object file uses only numerical parameters, data
structure layouts and accessors, and small macros and small inline
functions (ten lines or less in length), then the use of the object
file is unrestricted, regardless of whether it is legally a derivative
work.  (Executables containing this object code plus portions of the
Library will still fall under Section 6.)

  Otherwise, if the work is a derivative of the Library, you may
distribute the object code for the work under the terms of Section 6.
Any executables containing that work also fall under Section 6,
whether or not they are linked directly with the Library itself.

  6. As an exception to the Sections above, you may also combine or
link a "work that uses the Library" with the Library to produce a
work containing portions of the Library, and distribute that work
under terms of your choice, provided that the terms permit
modification of the work for the customer's own use and reverse
engineering for debugging such modifications.

  You must give prominent notice with each copy of the work that the
Library is used in it and that the Library and its use are covered by
this License.  You must supply a copy of this License.  If the work
during execution displays copyright notices, you must include the
copyright notice for the Library among them, as well as a reference
directing the user to the copy of this License.  Also, you must do one
of these things:

    a) Accompany the work with the complete corresponding
    machine-readable source code for the Library including whatever
    changes were used in the work (which must be distributed under
    Sections 1 and 2 above); and, if the work is an executable linked
    with the Library, with the complete machine-readable "work that
    uses the Library", as object code and/or source code, so that the
    user can modify the Library and then relink to produce a modified
    executable containing the modified Library.  (It is understood
    that the user who changes the contents of definitions files in the
    Library will not necessarily be able to recompile the application
    to use the modified definitions.)

    b) Use a suitable shared library mechanism for linking with the
    Library.  A suitable mechanism is one that (1) uses at run time a
    copy of the library already present on the user's computer system,
    rather than copying library functions into the executable, and (2)
    will operate properly with a modified version of the library, if
    the user installs one, as long as the modified version is
    interface-compatible with the version that the work was made with.

    c) Accompany the work with a written offer, valid for at
    least three years, to give the same user the materials
    specified in Subsection 6a, above, for a charge no more
    than the cost of performing this distribution.

    d) If distribution of the work is made by offering access to copy
    from a designated place, offer equivalent access to copy the above
    specified materials from the same place.

    e) Verify that the user has already received a copy of these
    materials or that you have already sent this user a copy.

  For an executable, the required form of the "work that uses the
Library" must include any data and utility programs needed for
reproducing the executable from it.  However, as a special exception,
the materials to be distributed need not include anything that is
normally distributed (in either source or binary form) with the major
components (compiler, kernel, and so on) of the operating system on
which the executable runs, unless that component itself accompanies
the executable.

  It may happen that this requirement contradicts the license
restrictions of other proprietary libraries that do not normally
accompany the operating system.  Such a contradiction means you cannot
use both them and the Library together in an executable that you
distribute.

  7. You may place library facilities that are a work based on the
Library side-by-side in a single library together with other library
facilities not covered by this License, and distribute such a combined
library, provided that the separate distribution of the work based on
the Library and of the other library facilities is otherwise
permitted, and provided that you do these two things:

    a) Accompany the combined library with a copy of the same work
    based on the Library, uncombined with any other library
    facilities.  This must be distributed under the terms of the
    Sections above.

    b) Give prominent notice with the combined library of the fact
    that part of it is a work based on the Library, and explaining
    where to find the accompanying uncombined form of the same work.

  8. You may not copy, modify, sublicense, link with, or distribute
the Library except as expressly provided under this License.  Any
attempt otherwise to copy, modify, sublicense, link with, or
distribute the Library is void, and will automatically terminate your
rights under this License.  However, parties who have received copies,
or rights, from you under this License will not have their licenses
terminated so long as such parties remain in full compliance.

  9. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Library or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Library (or any work based on the
Library), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Library or works based on it.

  10. Each time you redistribute the Library (or any work based on the
Library), the recipient automatically receives a license from the
original licensor to copy, distribute, link with or modify the Library
subject to these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties with
this License.

  11. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Library at all.  For example, if a patent
license would not permit royalty-free redistribution of the Library by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Library.

If any portion of this section is held invalid or unenforceable under any
particular circumstance, the balance of the section is intended to apply,
and the section as a whole is intended to apply in other circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  12. If the distribution and/or use of the Library is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Library under this License may add
an explicit geographical distribution limitation excluding those countries,
so that distribution is permitted only in or among countries not thus
excluded.  In such case, this License incorporates the limitation as if
written in the body of this License.

  13. The Free Software Foundation may publish revised and/or new
versions of the Lesser General Public License from time to time.
Such new versions will be similar in spirit to the present version,
but may differ in detail to address new problems or concerns.

Each version is given a distinguishing version number.  If the Library
specifies a version number of this License which applies to it and
"any later version", you have the option of following the terms and
conditions either of that version or of any later version published by
the Free Software Foundation.  If the Library does not specify a
license version number, you may choose any version ever published by
the Free Software Foundation.

  14. If you wish to incorporate parts of the Library into other free
programs whose distribution conditions are incompatible with these,
write to the author to ask for permission.  For software which is
copyrighted by the Free Software Foundation, write to the Free
Software Foundation; we sometimes make exceptions for this.  Our
decision will be guided by the two goals of preserving the free status
of all derivatives of our free software and of promoting the sharing
and reuse of software generally.

                            NO WARRANTY

  15. BECAUSE THE LIBRARY IS LICENSED FREE OF CHARGE, THERE IS NO
WARRANTY FOR THE LIBRARY, TO THE EXTENT PERMITTED BY APPLICABLE LAW.
EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR
OTHER PARTIES PROVIDE THE LIBRARY "AS IS" WITHOUT WARRANTY OF ANY
KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE
LIBRARY IS WITH YOU.  SHOULD THE LIBRARY PROVE DEFECTIVE, YOU ASSUME
THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

  16. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN
WRITING WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY
AND/OR REDISTRIBUTE THE LIBRARY AS PERMITTED ABOVE, BE LIABLE TO YOU
FOR DAMAGES, INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE
LIBRARY (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA BEING
RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A
FAILURE OF THE LIBRARY TO OPERATE WITH ANY OTHER SOFTWARE), EVEN IF
SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES.

                     END OF TERMS AND CONDITIONS

           How to Apply These Terms to Your New Libraries

  If you develop a new library, and you want it to be of the greatest
possible use to the public, we recommend making it free software that
everyone can redistribute and change.  You can do so by permitting
redistribution under these terms (or, alternatively, under the terms of the
ordinary General Public License).

  To apply these terms, attach the following notices to the library.  It is
safest to attach them to the start of each source file to most effectively
convey the exclusion of warranty; and each file should have at least the
"copyright" line and a pointer to where the full notice is found.

    <one line to give the library's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

Also add information on how to contact you by electronic and paper mail.

You should also get your employer (if you work as a programmer) or your
school, if any, to sign a "copyright disclaimer" for the library, if
necessary.  Here is a sample; alter the names:

  Yoyodyne, Inc., hereby disclaims all copyright interest in the
  library `Frob' (a library for tweaking knobs) written by James Random Hacker.

  <signature of Ty Coon>, 1 April 1990
  Ty Coon, President of Vice

That's all there is to it!
```







## ubus

License text in the source files:

```
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License version 2.1
as published by the Free Software Foundation

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
```

Copyright headers from the source files:

```
- ubusmsg.h: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- libubus.h: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- ubusd_main.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- cli.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- libubus-sub.c: Copyright (C) 2011-2012 Felix Fietkau <nbd@openwrt.org>
- libubus-obj.c: Copyright (C) 2011-2012 Felix Fietkau <nbd@openwrt.org>
- ubusd.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- libubus-acl.c: Copyright (C) 2015 John Cripin <blogic@openwrt.org>
- lua/ubus.c: Copyright (C) 2012 Jo-Philipp Wich <jow@openwrt.org>
- lua/ubus.c: Copyright (C) 2012 John Crispin <blogic@openwrt.org>
- lua/ubus.c: Copyright (C) 2016 Iain Fraser <iainf@netduma.com>
- libubus-internal.h: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- ubusd_id.h: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- ubusd_monitor.c: Copyright (C) 2015 Felix Fietkau <nbd@openwrt.org>
- ubusd_id.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- examples/count.h: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- examples/count.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- examples/client.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- examples/server.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- ubusd_obj.h: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- ubusd_obj.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- ubusd_proto.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- ubus_common.h: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- ubusd_event.c: Copyright (C) 2011 Felix Fietkau <nbd@openwrt.org>
- ubusd_acl.h: Copyright (C) 2015 John Crispin <blogic@openwrt.org>
- libubus-req.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- libubus.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- libubus-io.c: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
- ubusd_acl.c: Copyright (C) 2015 John Crispin <blogic@openwrt.org>
- ubusd_acl.c: Copyright (C) 2018 Hans Dedecker <dedeckeh@gmail.com>
- ubusd.h: Copyright (C) 2011-2014 Felix Fietkau <nbd@openwrt.org>
```

For a copy of the referenced GNU Lesser General Public License version 2.1 see the uci package above.

## util-linux libuuid

The COPYING file supplied with the libuuid source reads thus:

```
This library is free software; you can redistribute it and/or
modify it under the terms of the Modified BSD License.

The complete text of the license is available in the
../Documentation/licenses/COPYING.BSD-3-Clause file.
```

This is the referenced license file:

```
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, and the entire permission notice in its entirety,
   including the disclaimer of warranties.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the author may not be used to endorse or promote
   products derived from this software without specific prior
   written permission.

THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ALL OF
WHICH ARE HEREBY DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
USE OF THIS SOFTWARE, EVEN IF NOT ADVISED OF THE POSSIBILITY OF SUCH
DAMAGE.
```

Copyright headers from the source files:

```
- src/unpack.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/uuidP.h: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/pack.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/unparse.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/parse.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/isnull.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/copy.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/compare.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/clear.c: Copyright (C) 1996, 1997 Theodore Ts'o.
- src/uuid_time.c: Copyright (C) 1998, 1999 Theodore Ts'o.
- src/predefined.c: Copyright (C) 2017 Philip Prindeville
- src/uuidd.h: Copyright (C) 2007 Theodore Ts'o.
- src/uuid.h: Copyright (C) 1996, 1997, 1998 Theodore Ts'o.
- src/gen_uuid.c: Copyright (C) 1996, 1997, 1998, 1999 Theodore Ts'o.
- src/libuuid.sym: Copyright (C) 2011-2017 Kareil Zak <kzak@redhat.com>
- src/test_uuid.c: Copyright (C) 1996, 1997, 1998 Theodore Ts'o.
```

## musl libc

The COPYRIGHT file supplied with the source is reproduced here:

```
musl as a whole is licensed under the following standard MIT license:

----------------------------------------------------------------------
Copyright © 2005-2019 Rich Felker, et al.

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
----------------------------------------------------------------------

Authors/contributors include:

A. Wilcox
Alex Dowad
Alex Suykov
Alexander Monakov
Andre McCurdy
Andrew Kelley
Anthony G. Basile
Aric Belsito
Arvid Picciani
Bartosz Brachaczek
Benjamin Peterson
Bobby Bingham
Boris Brezillon
Brent Cook
Chris Spiegel
Clément Vasseur
Daniel Micay
Daniel Sabogal
Daurnimator
David Carlier
David Edelsohn
Denys Vlasenko
Dmitry Ivanov
Dmitry V. Levin
Drew DeVault
Emil Renner Berthing
Fangrui Song
Felix Fietkau
Felix Janda
Gianluca Anzolin
Hauke Mehrtens
He X
Hiltjo Posthuma
Isaac Dunham
Jaydeep Patil
Jens Gustedt
Jeremy Huntwork
Jo-Philipp Wich
Joakim Sindholt
John Spencer
Josiah Worcester
Julien Ramseier
Justin Cormack
Kaarle Ritvanen
Khem Raj
Kylie McClain
Leah Neukirchen
Luca Barbato
Luka Perkov
M Farkas-Dyck (Strake)
Mahesh Bodapati
Markus Wichmann
Masanori Ogino
Michael Clark
Michael Forney
Mikhail Kremnyov
Natanael Copa
Nicholas J. Kain
orc
Pascal Cuoq
Patrick Oppenlander
Petr Hosek
Petr Skocik
Pierre Carrier
Reini Urban
Rich Felker
Richard Pennington
Ryan Fairfax
Samuel Holland
Segev Finer
Shiz
sin
Solar Designer
Stefan Kristiansson
Stefan O'Rear
Szabolcs Nagy
Timo Teräs
Trutz Behn
Valentin Ochs
Will Dietz
William Haddon
William Pitcock

Portions of this software are derived from third-party works licensed
under terms compatible with the above MIT license:

The TRE regular expression implementation (src/regex/reg* and
src/regex/tre*) is Copyright © 2001-2008 Ville Laurikari and licensed
under a 2-clause BSD license (license text in the source files). The
included version has been heavily modified by Rich Felker in 2012, in
the interests of size, simplicity, and namespace cleanliness.

Much of the math library code (src/math/* and src/complex/*) is
Copyright © 1993,2004 Sun Microsystems or
Copyright © 2003-2011 David Schultz or
Copyright © 2003-2009 Steven G. Kargl or
Copyright © 2003-2009 Bruce D. Evans or
Copyright © 2008 Stephen L. Moshier or
Copyright © 2017-2018 Arm Limited
and labelled as such in comments in the individual source files. All
have been licensed under extremely permissive terms.

The ARM memcpy code (src/string/arm/memcpy_el.S) is Copyright © 2008
The Android Open Source Project and is licensed under a two-clause BSD
license. It was taken from Bionic libc, used on Android.

The implementation of DES for crypt (src/crypt/crypt_des.c) is
Copyright © 1994 David Burren. It is licensed under a BSD license.

The implementation of blowfish crypt (src/crypt/crypt_blowfish.c) was
originally written by Solar Designer and placed into the public
domain. The code also comes with a fallback permissive license for use
in jurisdictions that may not recognize the public domain.

The smoothsort implementation (src/stdlib/qsort.c) is Copyright © 2011
Valentin Ochs and is licensed under an MIT-style license.

The x86_64 port was written by Nicholas J. Kain and is licensed under
the standard MIT terms.

The mips and microblaze ports were originally written by Richard
Pennington for use in the ellcc project. The original code was adapted
by Rich Felker for build system and code conventions during upstream
integration. It is licensed under the standard MIT terms.

The mips64 port was contributed by Imagination Technologies and is
licensed under the standard MIT terms.

The powerpc port was also originally written by Richard Pennington,
and later supplemented and integrated by John Spencer. It is licensed
under the standard MIT terms.

All other files which have no copyright comments are original works
produced specifically for use as part of this library, written either
by Rich Felker, the main author of the library, or by one or more
contibutors listed above. Details on authorship of individual files
can be found in the git version control history of the project. The
omission of copyright and license comments in each file is in the
interest of source tree size.

In addition, permission is hereby granted for all public header files
(include/* and arch/*/bits/*) and crt files intended to be linked into
applications (crt/*, ldso/dlstart.c, and arch/*/crt_arch.h) to omit
the copyright notice and permission notice otherwise required by the
license, and to use these files without any requirement of
attribution. These files include substantial contributions from:

Bobby Bingham
John Spencer
Nicholas J. Kain
Rich Felker
Richard Pennington
Stefan Kristiansson
Szabolcs Nagy

all of whom have explicitly granted such permission.

This file previously contained text expressing a belief that most of
the files covered by the above exception were sufficiently trivial not
to be subject to copyright, resulting in confusion over whether it
negated the permissions granted in the license. In the spirit of
permissive licensing, and of not having licensing issues being an
obstacle to adoption, that text has been removed.
```

Copyright headers from the source files:

```
- src/string/arm/memcpy_le.S: Copyright (C) 2008 The Android Open Source Project
- src/thread/x32/__unmapself.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/thread/x32/__set_thread_area.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/thread/x86_64/__unmapself.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/thread/x86_64/__set_thread_area.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/crypt/crypt_des.c: Copyright (c) 1994 David Burren
- src/crypt/crypt_des.c: Copyright (c) 2000,2002,2010,2012 Solar Designer
- src/crypt/crypt_md5.c: Copyright (c) 2003 Poul-Henning Kamp
- src/crypt/crypt_blowfish.c: Copyright (c) 1998-2012 Solar Designer and it is hereby released to the
- src/complex/cexp.c: Copyright (c) 2011 David Schultz <das@FreeBSD.ORG>
- src/complex/csinh.c: Copyright (c) 2005 Bruce D. Evans and Steven G. Kargl
- src/complex/ctanhf.c: Copyright (c) 2011 David Schultz
- src/complex/__cexp.c: Copyright (c) 2011 David Schultz <das@FreeBSD.ORG>
- src/complex/csqrtf.c: Copyright (c) 2007 David Schultz <das@FreeBSD.ORG>
- src/complex/csinhf.c: Copyright (c) 2005 Bruce D. Evans and Steven G. Kargl
- src/complex/csqrt.c: Copyright (c) 2007 David Schultz <das@FreeBSD.ORG>
- src/complex/cexpf.c: Copyright (c) 2011 David Schultz <das@FreeBSD.ORG>
- src/complex/__cexpf.c: Copyright (c) 2011 David Schultz <das@FreeBSD.ORG>
- src/complex/ctanh.c: Copyright (c) 2011 David Schultz
- src/complex/catanf.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/complex/ccoshf.c: Copyright (c) 2005 Bruce D. Evans and Steven G. Kargl
- src/complex/ccosh.c: Copyright (c) 2005 Bruce D. Evans and Steven G. Kargl
- src/complex/catanl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/complex/catan.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/regex/regexec.c:  Copyright (c) 2001-2009 Ville Laurikari <vl@iki.fi>
- src/regex/regcomp.c:  Copyright (c) 2001-2009 Ville Laurikari <vl@iki.fi>
- src/regex/tre-mem.c:  Copyright (c) 2001-2009 Ville Laurikari <vl@iki.fi>
- src/regex/tre.h:  Copyright (c) 2001-2009 Ville Laurikari <vl@iki.fi>
- src/stdlib/qsort.c:/* Copyright (C) 2011 by Valentin Ochs
- src/setjmp/x32/longjmp.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/setjmp/x32/setjmp.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/setjmp/x86_64/longjmp.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/setjmp/x86_64/setjmp.s:/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
- src/math/__tanl.c: Copyright 2004 Sun Microsystems, Inc.  All Rights Reserved.
- src/math/__tanl.c: Copyright (c) 2008 Steven G. Kargl, David Schultz, Bruce D. Evans.
- src/math/__sinl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__sinl.c: Copyright (c) 2008 Steven G. Kargl, David Schultz, Bruce D. Evans.
- src/math/expm1l.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/acosl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/lgammaf_r.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/exp2f_data.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/fmaf.c: Copyright (c) 2005-2011 David Schultz <das@FreeBSD.ORG>
- src/math/j0.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/log2_data.c: Copyright (c) 2018, Arm Limited.
- src/math/cbrt.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/logf_data.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/exp2l.c: Copyright (c) 2005-2008 David Schultz <das@FreeBSD.ORG>
- src/math/asin.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/log2.c: Copyright (c) 2018, Arm Limited.
- src/math/log.c: Copyright (c) 2018, Arm Limited.
- src/math/jn.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/sincosf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__sindf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/atanf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/logf.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/sin.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/j0f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/fmal.c: Copyright (c) 2005-2011 David Schultz <das@FreeBSD.ORG>
- src/math/exp_data.c: Copyright (c) 2018, Arm Limited.
- src/math/expm1.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__tandf.c: Copyright 2004 Sun Microsystems, Inc.  All Rights Reserved.
- src/math/log1pf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/scalbf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/cbrtf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/sinf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/pow.c: Copyright (c) 2018, Arm Limited.
- src/math/__cos.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/cos.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/expm1f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/lgamma_r.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/atanl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/powf.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/log10f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/expl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/log10l.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/exp2f_data.h: Copyright (c) 2017-2018, Arm Limited.
- src/math/log2f.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/cbrtl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/cbrtl.c: Copyright (c) 2009-2011, Bruce D. Evans, Steven G. Kargl, David Schultz.
- src/math/expf.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/jnf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/powf_data.h: Copyright (c) 2017-2018, Arm Limited.
- src/math/atan2l.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/log_data.c: Copyright (c) 2018, Arm Limited.
- src/math/log1p.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/acos.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/atan2f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/exp.c: Copyright (c) 2018, Arm Limited.
- src/math/lgammal.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/lgammal.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/__cosl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__cosl.c: Copyright (c) 2008 Steven G. Kargl, David Schultz, Bruce D. Evans.
- src/math/sqrt.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/log2f_data.h: Copyright (c) 2017-2018, Arm Limited.
- src/math/pow_data.h: Copyright (c) 2018, Arm Limited.
- src/math/erf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/log2_data.h: Copyright (c) 2018, Arm Limited.
- src/math/log10.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/logl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/log2f_data.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/acosf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/powf_data.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/log2l.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/atan.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/atan2.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/sqrtf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__tan.c: Copyright 2004 Sun Microsystems, Inc.  All Rights Reserved.
- src/math/logf_data.h: Copyright (c) 2017-2018, Arm Limited.
- src/math/exp2.c: Copyright (c) 2018, Arm Limited.
- src/math/tan.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__rem_pio2.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/scalb.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/powl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/erfl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/erfl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/__rem_pio2_large.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/erff.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/asinf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/tanf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/exp_data.h: Copyright (c) 2018, Arm Limited.
- src/math/__rem_pio2f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/j1f.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/exp2f.c: Copyright (c) 2017-2018, Arm Limited.
- src/math/cosf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__cosdf.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__sin.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__rem_pio2l.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__rem_pio2l.c: Copyright (c) 2008 Steven G. Kargl, David Schultz, Bruce D. Evans.
- src/math/asinl.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/sincos.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/tgammal.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/log1pl.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/j1.c: Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
- src/math/__polevll.c: Copyright (c) 2008 Stephen L. Moshier <steve@moshier.net>
- src/math/pow_data.c: Copyright (c) 2018, Arm Limited.
- src/math/log_data.h: Copyright (c) 2018, Arm Limited.
```