WINLDAPAPI VOID LDAPAPI WLDAP32$ldap_memfree(PCHAR);
WINLDAPAPI VOID LDAPAPI WLDAP32$ber_free(BerElement* pBerElement, INT fbuf);
WINLDAPAPI VOID LDAPAPI WLDAP32$ber_free(BerElement* pBerElement, INT fbuf);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_value_free(PCHAR*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_value_free(PCHAR*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_value_free_len(struct berval** vals);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_value_free_len(struct berval** vals);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_unbind(LDAP*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_unbind_s(LDAP*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_set_optionA(LDAP* ld, int option, const void* invalue);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_set_optionA(LDAP* ld, int option, const void* invalue);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_search_s(LDAP* ld, PSTR base, ULONG scope, PSTR filter, PZPSTR attrs, ULONG attrsonly, PLDAPMessage* res);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_search_s(LDAP* ld, PSTR base, ULONG scope, PSTR filter, PZPSTR attrs, ULONG attrsonly, PLDAPMessage* res);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_msgfree(LDAPMessage*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_get_paged_count(PLDAP ExternalHandle, PLDAPSearch SearchBlock, ULONG* TotalCount, PLDAPMessage Results);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_get_paged_count(PLDAP ExternalHandle, PLDAPSearch SearchBlock, ULONG* TotalCount, PLDAPMessage Results);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_get_next_page_s(PLDAP ExternalHandle, PLDAPSearch SearchHandle, struct l_timeval* timeout, ULONG PageSize, ULONG* TotalCount, LDAPMessage** Results);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_get_next_page_s(PLDAP ExternalHandle, PLDAPSearch SearchHandle, struct l_timeval* timeout, ULONG PageSize, ULONG* TotalCount, LDAPMessage** Results);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_count_values(PCHAR);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_count_entries(LDAP*, LDAPMessage*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_count_entries(LDAP*, LDAPMessage*);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_bind_s(LDAP* ld, const PSTR  dn, const PCHAR cred, ULONG method);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_bind_s(LDAP* ld, const PSTR dn, const PCHAR cred, ULONG method);
WINLDAPAPI ULONG LDAPAPI WLDAP32$ldap_bind_s(LDAP* ld, const PSTR  dn, const PCHAR cred, ULONG method);
WINLDAPAPI struct berval** LDAPAPI WLDAP32$ldap_get_values_lenA(LDAP* ExternalHandle, LDAPMessage* Message, const PCHAR attr);
WINLDAPAPI struct berval** LDAPAPI WLDAP32$ldap_get_values_lenA(LDAP* ExternalHandle, LDAPMessage* Message, const PCHAR attr);
WINLDAPAPI PLDAPSearch LDAPAPI WLDAP32$ldap_search_init_pageA(PLDAP ExternalHandle, const PCHAR DistinguishedName, ULONG ScopeOfSearch, const PCHAR SearchFilter, PCHAR AttributeList[], ULONG AttributesOnly, PLDAPControlA* ServerControls, PLDAPControlA* ClientControls, ULONG PageTimeLimit, ULONG TotalSizeLimit, PLDAPSortKeyA* SortKeys);
WINLDAPAPI PLDAPSearch LDAPAPI WLDAP32$ldap_search_init_pageA(PLDAP ExternalHandle, const PCHAR DistinguishedName, ULONG ScopeOfSearch, const PCHAR SearchFilter, PCHAR AttributeList[], ULONG AttributesOnly, PLDAPControlA* ServerControls, PLDAPControlA* ClientControls, ULONG PageTimeLimit, ULONG TotalSizeLimit, PLDAPSortKeyA* SortKeys);
WINLDAPAPI PCHAR* LDAPAPI WLDAP32$ldap_get_values(LDAP* ld, LDAPMessage* entry, const PSTR attr);
WINLDAPAPI PCHAR LDAPAPI WLDAP32$ldap_next_attribute(LDAP* ld, LDAPMessage* entry, BerElement* ptr);
WINLDAPAPI PCHAR LDAPAPI WLDAP32$ldap_next_attribute(LDAP* ld, LDAPMessage* entry, BerElement* ptr);
WINLDAPAPI PCHAR LDAPAPI WLDAP32$ldap_first_attribute(LDAP* ld, LDAPMessage* entry, BerElement** ptr);
WINLDAPAPI PCHAR LDAPAPI WLDAP32$ldap_first_attribute(LDAP* ld, LDAPMessage* entry, BerElement** ptr);
WINLDAPAPI PCHAR* LDAPAPI WLDAP32$ldap_get_values(LDAP* ld, LDAPMessage* entry, const PSTR attr);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_next_entry(LDAP*, LDAPMessage*);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_next_entry(LDAP*, LDAPMessage*);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_first_entry(LDAP* ld, LDAPMessage* res);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_first_entry(LDAP* ld, LDAPMessage* res);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_next_entry(LDAP*, LDAPMessage*);
WINLDAPAPI LDAPMessage* LDAPAPI WLDAP32$ldap_first_entry(LDAP* ld, LDAPMessage* res);
WINLDAPAPI LDAP* LDAPAPI WLDAP32$ldap_init(PSTR, ULONG);
