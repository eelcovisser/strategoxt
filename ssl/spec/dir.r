\literate[dir]

	\begin{abstract}

	Strategies for exploring directories.

	\end{abstract}


\begin{code}
module dir
strategies

  /*   The  readdir()  function  returns  a  pointer  to a dirent
       structure representing the next  directory  entry  in  the
       directory  stream  pointed  to by dir.  It returns NULL on
       reaching the end-of-file or if an error occurred. */

  readdir = 
    ?dir; prim("SSL_readdir", dir)

  /*   These  functions  return  information  about the specified
       file.  You do not need any access rights to  the  file  to
       get  this  information  but  you need search rights to all
       directories named in the path leading to the file. */

  /* stat = 
    ?file; prim("SSL_stat", file) */

  modification-time =
    ?file; prim("SSL_modification_time", file)

  file-newer =
    (modification-time, modification-time); gt

  /*   The  getenv() function searches the environment list for a
       string that matches the string pointed to  by  name.   The
       strings are of the form name = value. */

  getenv = 
    ?name; prim("SSL_getenv", name)


  /*   The  setenv() function adds the variable name to the envi�
       ronment with the value value, if  name  does  not  already
       exist.   If  name  does exist in the environment, then its
       value is changed to value if  overwrite  is  non-zero;  if
       overwrite  is zero, then the value of name is not changed. */

  setenv = 
    ?(name, value, overwrite); 
    where(prim("SSL_setenv", name, value, overwrite))

\end{code}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.
