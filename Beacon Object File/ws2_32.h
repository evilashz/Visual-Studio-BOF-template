//WS2_32
// defining this here to avoid including ws2tcpip.h which results in include order warnings when bofs include windows.h before bofdefs.h
typedef struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    size_t ai_addrlen;
    char* ai_canonname;
    struct sockaddr* ai_addr;
    struct addrinfo* ai_next;
} ADDRINFOA, * PADDRINFOA;

//WS2_32
WINBASEAPI u_short WINAPI WS2_32$htons(u_short hostshort);
WINBASEAPI u_long WINAPI WS2_32$htonl(u_long hostlong);
WINBASEAPI LPCWSTR WINAPI WS2_32$InetNtopW(INT Family, LPCVOID pAddr, LPWSTR pStringBuf, size_t StringBufSIze);
WINBASEAPI INT WINAPI WS2_32$inet_pton(INT Family, LPCSTR pStringBuf, PVOID pAddr);
WINBASEAPI char* WINAPI WS2_32$inet_ntoa(struct in_addr in);
DECLSPEC_IMPORT void __stdcall WS2_32$freeaddrinfo(struct addrinfo* ai);
DECLSPEC_IMPORT unsigned int __stdcall WS2_32$socket(int af, int type, int protocol);
DECLSPEC_IMPORT u_short __stdcall WS2_32$htons(u_short hostshort);
DECLSPEC_IMPORT u_long __stdcall WS2_32$htonl(u_long hostlong);
DECLSPEC_IMPORT LPCWSTR WINAPI WS2_32$InetNtopW(INT Family, LPCVOID pAddr, LPWSTR pStringBuf, size_t StringBufSIze);
DECLSPEC_IMPORT INT WINAPI WS2_32$inet_pton(INT Family, LPCSTR pStringBuf, PVOID pAddr);
DECLSPEC_IMPORT int __stdcall WS2_32$WSAGetLastError();
DECLSPEC_IMPORT int __stdcall WS2_32$select(int nfds, fd_set* readfds, fd_set* writefds, fd_set* exceptfds, const struct timeval* timeout);
DECLSPEC_IMPORT int __stdcall WS2_32$ioctlsocket(SOCKET sock, long cmd, u_long* arg);
DECLSPEC_IMPORT int __stdcall WS2_32$getaddrinfo(char* host, char* port, const struct addrinfo* hints, struct addrinfo** result);
DECLSPEC_IMPORT int __stdcall WS2_32$connect(SOCKET sock, const struct sockaddr* name, int namelen);
DECLSPEC_IMPORT int __stdcall WS2_32$closesocket(SOCKET sock);
DECLSPEC_IMPORT int __stdcall WS2_32$__WSAFDIsSet(SOCKET sock, struct fd_set* fdset);
DECLSPEC_IMPORT char* __stdcall WS2_32$inet_ntoa(struct in_addr in);
DECLSPEC_IMPORT char* __stdcall WS2_32$inet_ntoa(struct in_addr in);